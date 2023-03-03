package org.example;

import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import java.util.List;

import static org.assertj.core.api.Assertions.assertThatCode;

/*
음식점에서 음식을 주문하는 과정 구현
요구사항
	1. 도메인을 구성하는 객체에는 어떤 것들이 있는지 고민
	2. 객체들 간의 관계를 고민
	3. 동적인 객체를 정적인 타입으로 추상화해서 도메인 모델링하기
	4. 협력을 설계
	5. 객체들을 포괄하는 타입에 적절한 책임을 할당
	6. 구현하기

나의 생각
구성 객체 - 음식과 가격, 음식을 담는 장바구니, 고객의 결제를 요청받고 처리하는 공간
개체들 간의 관계 - 음식과 가격은 하나의 객체에 또한 장바구니가 음식과 가격 객체와 연결, 최종적으로 결제
동적인 객체를 정적인 타입으로 추상화 - 음식과 가격을 인터페이스화
협력을 설계 - 각 객체들이 서로 협력하도록 연결
객체들을 포괄하는 타입에 적절한 책임을 할당 - ?

강의자의 생각
구성 객체 - 손님, 메뉴판, 돈까스/냉면/만두같은 음식들, 요리사, 요리 (구성 객체를 모두 발견하지 못하였다고 자책할 필요는 없다. 구현하면서 그때 그때 추가해도 됨, TDD라 가능한 일.)
개체들 간의 관계 - 손님 -- 메뉴판, 손님 -- 요리사, 요리사 -- 요리
동적인 객체를 정적인 타입으로 추상화 - 손님 -- 손님타입으로 추상화, 돈까스/냉면/만두는 요리타입으로 추상화, 메뉴판은 메뉴판 타입으로 추상화, 메뉴는 메뉴타입으로 추상화
협력을 설계 - TEST 코드를 통해 설명
객체들을 포괄하는 타입에 적절한 책임을 할당 - TEST 코드를 통해 설명

* */
public class CustomerTest {
    @DisplayName("메뉴이름에 해당하는 요리를 주문을 한다.")
    @Test
    void orderTest() {
        Customer customer = new Customer();
        Menu menu = new Menu(List.of(new MenuItem("돈까스", 5000), new MenuItem("냉면",7000)));
        Cooking cooking = new Cooking();

        assertThatCode(() -> customer.order("돈까스", menu, cooking))
                .doesNotThrowAnyException();
    }
}
