package org.example.counter;

public class RaceCondition {
    /*
    * 싱클톤 객체에서 상태를 유지하게 된다면, 발생하는 문제를 확인하는 것.
    * 하나의 객체 또는 자원을 공유하게 되며 뜻하지않는 레이스 컨디션 즉 원치않는 결과를 가져오게 된다.
    * Race Condition이란 여러 프로세스 또는 쓰레드가 하나의 자원에 접근하기위한 경쟁을 하는 것.
    * 따라서 우리는 원치않는 결과를 얻게되는 것이다.
    * 상태를 유지하게되면 쓰레드가 안전하지 않게 된다.
    * 사실 Counter 부분은 동기화를 해주면 된다. synchronized를 하면 값이 정상적으로 나올 수 있다.
    * 싱글톤 객체에서는 상태를 유지하지 않게끔 잘 관리를 해야한다.
    * */
    public static void main(String[] args) {
        Counter counter = new Counter();
        Thread t1 = new Thread(counter, "Thread-1");
        Thread t2 = new Thread(counter, "Thread-2");
        Thread t3 = new Thread(counter, "Thread-3");

        t1.start();
        t2.start();
        t3.start();
    }
}
