package org.example.caculator.tobe;

import org.example.caculator.domain.PositiveNumber;

public class DivideOperator implements ArithmeticOperator {
    @Override
    public boolean supports(String operator) {
        return "%2F".equals(operator);
    }

    @Override
    public int calculate(PositiveNumber operand1, PositiveNumber operand2) {
        return operand1.toInt() / operand2.toInt();
    }
}
