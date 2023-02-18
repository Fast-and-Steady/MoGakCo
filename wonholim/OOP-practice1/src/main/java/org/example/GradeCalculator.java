package org.example;

import java.util.List;

public class GradeCalculator {
    private final Courses courses; // 일급 컬렉션으로 바꾸면 좋은점

    public GradeCalculator(List<Course> courses) {
        this.courses = new Courses(courses);
    }

    public double calculateGrade() {
        // 어떤 문제가 있을가?
        // for문에서 바꿀 경우 모두 바꿔야 하므로 의존적임..
        // Course에서 수행하는게 올바르다? 왜?
        // get같은 경우 두번으로 가서 구해야하지만, get에서 한번에 처리해주면, 되는 문제
        // 이는 높은 응집도에 높은 결합도 이므로, 낮은 결합도로 바꾸는 것이다.
        double multipliedCreditAndCourseGrade = courses.multipliedCreditAndCourseGrade();
        // 수강신청 총학점 수
        int totalCompletedCredit = courses.calculateTotalCompletedCredit();

        return multipliedCreditAndCourseGrade / totalCompletedCredit;
    }
}
