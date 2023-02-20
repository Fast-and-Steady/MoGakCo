package example;

import org.example.caculator.domain.Calculator;
import org.example.caculator.domain.PositiveNumber;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.MethodSource;

import java.util.stream.Stream;

import static org.assertj.core.api.Assertions.assertThat;
import static org.junit.jupiter.params.provider.Arguments.arguments;


//사칙연산 계산기 구현
//요구사항
//1. 간단한 사칙연산을 할 수 있다.
//2. 양수로만 계산할 수 있다.
//3. 나눗셈에서 0을 나누는 경우 IllegalArgumentException 예외를 발생시킨다.
//4. MVC 패턴 (Model-View-Controller)를 기반으로 구현한다.

class CalculatorTest {

    // 덧셈 연산자를 실행하는 경우 1 + 2 ------> Calculator에게 전달하면,
    // 3 <-----인 퍼블릭 인터페이스를 구현해야한다.
    @DisplayName("덧셈 연산을 수행한다.")
    @Test
    void additionTest(){
        int result = Calculator.calculate(new PositiveNumber(1), "+", new PositiveNumber(2));

        assertThat(result).isEqualTo(3);
    }

    @DisplayName("뺄셈 연산을 수행한다.")
    @Test
    void subtractionTest(){
        int result = Calculator.calculate(new PositiveNumber(1), "-", new PositiveNumber(2));

        assertThat(result).isEqualTo(-1);
    }

    @DisplayName("사칙연산을 수행한다.")
    @ParameterizedTest
    @MethodSource("formulaAndResult")
    void calculateTest(int operand1, String operator, int operand2, int result){
        int calculateResult = Calculator.calculate(new PositiveNumber(operand1), operator, new PositiveNumber(operand2));

        assertThat(calculateResult).isEqualTo(result);
    }

    private static Stream<Arguments> formulaAndResult() {
        return Stream.of(
                arguments(1, "+", 2, 3),
                arguments(1, "-", 2, -1),
                arguments(4, "*", 2, 8),
                arguments(4, "/", 2, 2)
        );
    }

//    @DisplayName("나눗셈에서 0을 나누는 경우 IllegalException을 발생시킨다.")
//    @Test
//    void calculateExceptionTest(){
//        assertThatCode(() -> Calculator.calculate(new PositiveNumber(10), "/", new PositiveNumber(0)))
//                .isInstanceOf(IllegalArgumentException.class)
//                .hasMessage("0 또는 음수를 전달할 수 없습니다.");
//        // Divide에서 걸리는 코드를 Positive에서 걸러져서 Divide가 검사하는 것을 없앤것.
//    }
}
