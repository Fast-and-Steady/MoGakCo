package org.example;

import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;

import static org.assertj.core.api.AssertionsForClassTypes.assertThatCode;

/*
요구사항
비밀번호는 최소 8자 이상 12자 이하
비밀번호가 8자 미만 또는 12자 초과인 경우 IllegalArgumentException 예외를 발생시킨다.
경계조건에 대해 테스트 코드를 작성해야 한다.
* */
public class PasswordValidatorTest {

    @DisplayName("비밀번호가 8자 이상, 12자 이하면 예외가 발생하지 않는다.")
    @Test
    void validatePasswordTest() {
        assertThatCode(() -> PasswordValidator.validate("serverwizard"))
                .doesNotThrowAnyException();
    }

    // TDD는 처음이지만, 배울 내용이 많고, 상당히 도움이 많이 된다.
    @DisplayName("비밀번호가 8자미만 또는 12자 초과하는 경우 IllegalArgumentExceoption 예외가 발생한다.")
    @ParameterizedTest // 여러 데이터 소스를 사용하기 위해 사용하는 것, CSV 소스나, Enum, CSV File 소스, Method소스도 있다.
    @ValueSource(strings = {"aabbcce", "aabbccddeeffg"})
    void validatePasswordTest2(String password) {
        assertThatCode(() -> PasswordValidator.validate(password))
                .isInstanceOf(IllegalArgumentException.class)
                .hasMessage("비밀번호는 최소 8자 이상 12자 이하여야 합니다.");
    }

}
