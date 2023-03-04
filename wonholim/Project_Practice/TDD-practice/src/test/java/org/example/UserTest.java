package org.example;

import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import static org.assertj.core.api.Assertions.assertThat;

class UserTest {

    @DisplayName("패스워드 초기화 한다.")
    @Test //BDD
    void passwordTest() {
        // given
        User user = new User();
        // when
        //user.initPassword(new CorrectFixedPasswordGenerator());
        //FunctionalInterface 이기 때문에 람다로 구현이 가능하다.
        user.initPassword(() -> "abcdefgh");
        // then
        assertThat(user.getPassword()).isNotNull();
    }

    @DisplayName("패스워드가 요구사항에 부합하지 않아 초기화가 되지않는다.")
    @Test //BDD
    void passwordTest2() {
        // given
        User user = new User();
        // when
        //user.initPassword(new WrongFixedPasswordGenerator());
        // FunctionalInterface 이기 때문에 람다로 구현이 가능하다.
        user.initPassword(() -> "ab");
        // then
        assertThat(user.getPassword()).isNull();
    }
}
