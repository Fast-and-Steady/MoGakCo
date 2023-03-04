package org.example;

import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import java.util.List;

import static org.assertj.core.api.Assertions.assertThat;

/*
학점 계산기 구현
요구사항
	평균 학점 계산 방법 = (학점수 X 교과목 평점)의 합계 / 수강신청 총학점 수
	일급 컬렉션 사용
* */
public class GradeCalculatorTest {

    // 학점 계산기 도메인 : 이수한 과목(자료구조, 객체지향, 알고리즘), 학점 계산기
    // 학점계산기가 이수한 과목을 인스턴스로 가지면서 계산하면 될것 같다.
    // 자료구조, 객체지향, 알고리즘 --> 이수한 과목 (클래스)
    // 이수한 과목을 전달하여, 평균학점 계산을 요청한다. ----> 학점 계산기에게 요청 ----> (학점수 X 교과목 평점)의 합계 ----> 이수한 과목 클래스에게 요청
    //                                                                        ----> 수강신청 총학점 수          ---->  이수한 과목 클래스에게 요청
    //                                                                              이수한 과목 클래스는 이수한 학점이 몇 학점인지 가지고 있다.
    @DisplayName("평균 학점을 계산한다.")
    @Test
    void calculateGradeTest(){
        List<Course> courses = List.of(new Course("OOP", 3, "A+"),
                new Course("자료구조", 3, "A+"));

        GradeCalculator gradeCalculator = new GradeCalculator(courses);
        double gradeResult = gradeCalculator.calculateGrade();

        assertThat(gradeResult).isEqualTo(4.5);
    }
}
