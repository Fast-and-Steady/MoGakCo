package org.example;

import java.util.List;

// 일급 컬렉션 하나의 정보만 가진, 클래스
// 그 정보로 처리할 수 있는 것은 모두 이 밑으로 들어옴.
public class Courses {
    private final List<Course> courses;

    public Courses(List<Course> courses) {
        this.courses = courses;
    }

    public double multipliedCreditAndCourseGrade() {
        return courses.stream()
                .mapToDouble(Course::multiplyCreaditAndCourseGrade)
                .sum();
    }

    public int calculateTotalCompletedCredit() {
        return courses.stream()
                .mapToInt(Course::getCredit)
                .sum();
    }
}
