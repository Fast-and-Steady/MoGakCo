package example;

import org.example.QueryString;
import org.example.RequestLine;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import static org.assertj.core.api.Assertions.assertThat;

public class QueryStringTest {
    // operand1=11&operator=*&operand2=55
    @DisplayName("QueryString이 올바른지 확인한다.")
    @Test
    void queryStringTest() {
        QueryString queryString = new QueryString("operand1", "11"); // 쿼리 스트링은 키와 벨류를 하나 가지는 객체 이 객체가 여러개 있으면 된다 따라서, List를 사용.

        assertThat(queryString).isNotNull();
//        assertThat(queryString).isEqualTo(new QueryString("operand1", "11"));
    }
}
