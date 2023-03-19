import org.example.annotaion.Controller;

import org.example.annotaion.Service;
import org.example.model.User;
import org.junit.jupiter.api.Test;
import org.reflections.Reflections;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.lang.annotation.Annotation;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.stream.Collectors;


public class ReflectionTest {
    private static final Logger logger = LoggerFactory.getLogger(ReflectionTest.class);
    // @Controller 애노테이션이 설정 돼어있는 모든 클래스를 찾아 출력한다.
    @Test
    void controllerScan(){
        Set<Class<?>> beans = getTypesAnnotatedWith(List.of(Controller.class, Service.class));

        logger.debug("beans : [{}]", beans);
    }

    @Test
    void showClass() {
        Class<User> clazz = User.class;
        logger.debug(clazz.getName());

        logger.debug("User all declared Fields : [{}]", Arrays.stream(clazz.getDeclaredFields()).collect(Collectors.toList()));
        logger.debug("User all declared Contructors : [{}]", Arrays.stream(clazz.getDeclaredConstructors()).collect(Collectors.toList()));
        logger.debug("User all declared Methods : [{}]", Arrays.stream(clazz.getDeclaredMethods()).collect(Collectors.toList()));
        
    }

    @Test
    void load() throws ClassNotFoundException {
        // heap staging load class
        //1
        Class<User> clazz = User.class;
        //2
        User user = new User("wonho", "임원호");
        Class<? extends  User> clazz2 = user.getClass();
        //3
        Class<?> clazz3 = Class.forName("org.example.model.User");

        logger.debug("first : [{}]", clazz);
        logger.debug("second : [{}]", clazz2);
        logger.debug("third : [{}]", clazz3);

    }

    private static Set<Class<?>> getTypesAnnotatedWith(List<Class<? extends Annotation>> annotaions) {
        Reflections reflections = new Reflections("org.example");

        Set<Class<?>> beans = new HashSet<>();
        annotaions.forEach(annotation -> beans.addAll(reflections.getTypesAnnotatedWith(annotation)));

        return beans;
    }
}
