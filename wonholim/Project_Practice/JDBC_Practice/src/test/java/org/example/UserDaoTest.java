package org.example;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.springframework.core.io.ClassPathResource;
import org.springframework.jdbc.datasource.init.DatabasePopulatorUtils;
import org.springframework.jdbc.datasource.init.ResourceDatabasePopulator;

import java.sql.SQLException;

import static org.assertj.core.api.Assertions.assertThat;

public class UserDaoTest {

    /*
    * ResourceDatabasePopulator를 불러 dbsql을 스크립트를 추가하고, 수행한다.
    * database에 데이터가 있기전, 데이터베이스를 실행하고, 로그인, 전처리를 맡는다.
    * */
    @BeforeEach // test코드 실행전 수행하기 위해 작성
    void setUp(){
        ResourceDatabasePopulator populator = new ResourceDatabasePopulator();
        populator.addScript(new ClassPathResource("db_schema.sql"));
        DatabasePopulatorUtils.execute(populator, ConnectionManager.getDataSource());
    }

    /*
    * userDao를 이용해서, 데이터베이스에 User를 데이터를 추가하고, assert로 확인한다.
    * */
    @Test
    void createTest() throws SQLException {
        UserDao userDao = new UserDao();

        userDao.create(new User("wonho", "1234", "limwonho", "kds0034@gmail.com"));

        User user = userDao.findByUserId("wonho");
        assertThat(user).isEqualTo(new User("wonho", "1234", "limwonho", "kds0034@gmail.com"));

    }
}
