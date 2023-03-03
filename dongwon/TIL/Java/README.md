## 1. 자바 소스 파일(.java)을 JVM으로 실행하는 과정 이해하기

<br>

### JVM이란 무엇인가 ?

JVM이란 Java Virtual Machine의 줄임말로 자바를 실행하기 위한 가상 기계다

Java는 OS에 종속적이지 않은 대신에, OS 위에서 Java를 실행시킬  무엇인가가 JVM이다

OS에 종속받지 않고 CPU가 Java를 인식해 실행시켜 주는 가상 컴퓨터

![Untitled](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2F0kg24%2Fbtq4YOOQH4J%2FEF2ISOpkYA36a1flwtLEmK%2Fimg.png)

그런데 Java 소스 코드인 원시코드(*.java)는 CPU가 인식하지 못해서 원시코드를 기계어로 컴파일 해줘야 하는데 여기서 JVM을 거쳐서 기계어를 읽을수 있는 OS 에 도달한다. 그런데 JVM에서 OS로 가기전, JVM은 기계어를 읽을수 없기에 JVM이 인식할수 있는 Java bytecode 인 (*.class) 로 변환된다

결론적으론 Java compiler 가 .java 파일을 .class 라는 자바 bytecode로 변한하는 것이다

<aside>
🎃 여기서 Java compiler는 JDK를 설치하면 bin에 존재하는 javc.exe를 말한다. 
(즉 JDK 안에 Java compiler가 포함이 되어 있는 것이다)
javac 명령어를 통해 .java 파일을 .class 로 컴파일 할 수 있다

</aside>

변환된 bytecode(.class) 는 기계어가 아니여서 바로 OS로 실행되지 않고, JVM이 OS가 bytecode를 이해할 수 있게 해석해 준다. 그래서 Byte코드는 JVM 위에서 해석할수 있게 해주기에 OS에 상관없이 실행될 수 있는 것이다 ( OS에 종속적이지 않으며, Java파일만 있으면 어느 디바이스 위에서든 실행이 가능해진것)

</br>

### 컴파일 하는 방법

앞서 말했듯 자바 컴파일 파일은 JDK를 설치했을때 javac.exe 실행파일 형태로 실행된다. JDK의 bin 폴더안에 javac.exe 형태로 존재하며 javac 명령어를 사용해서 .class 파일을 생성할 수 있다 

```java
public class test {
		public static void main(String [] args) {
				System.out.println("Hello World");
		}
}
```

"Hello World" 를 출력해야하는 .java 파일이 생성되어 지며 이를 javac 명령어를 통해 .class 파일을 만들어 줄수 있었다


![Alt text](Untitled%20(2).png)
![Alt text](Untitled%20(3).png)


### 실행하는 방법

<aside>
🎃 JDK 폴더의 /bin 폴더에 java.exe 는 JVM을 구동시키는 명령 프로그램이다
java 명령어로 JVM을 구동할수 있다

</aside>

.class 파일의 위치로 이동해서 java < .class 파일 이름> 을 입력해 실행한다

![Untitled](https://s3.us-west-2.amazonaws.com/secure.notion-static.com/58bb15d1-53ca-4212-9993-c8f8cbe17fe0/Untitled.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=AKIAT73L2G45EIPT3X45%2F20230301%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20230301T082634Z&X-Amz-Expires=86400&X-Amz-Signature=13b2d1a82a86afd9740a46daee051b9883711adb34ad6f23f81f8a29e0a0e9a6&X-Amz-SignedHeaders=host&response-content-disposition=filename%3D%22Untitled.png%22&x-id=GetObject)

### 바이트코드란 무엇인가

가상 컴퓨터 JVM에서 돌아가는 실행 프로그램을 위한 이진법이다

java bytecode 는 JVM이 이해할수 있는 언어로 변환된 자바 소스코드다

java compiler에 의해 변환된 코드의 명령어 크기가 1byte여서 자바 바이트 코드라 부르고 있다, 다시 바이트 코드는 실시간 번역기나 JIT 컴파일러를 통해서 binary code로 변환된다

 

<aside>
🎃 **바이너리** 코드는 이진 코드라고도 불리며, 컴퓨터가 인식할 수 있는 0과 1로 구성된 코드입니다.

**기계어**는 0과 1로 이루어진 바이너리 코드를 말합니다. 모든 이진 코드가 기계어인 것은 아닙니다.

</aside>

결론적으로 CPU가 이해하는 언어는 바이너리 코드며 가상 머신이 이해하는 코드는 바이트 코드이다

(자바코드 *.java) → (컴파일) → (자바 바이트코드 *.class) → (변환) → (binary code CPU이해 언어)

### JIT 컴파일러란 무엇이며 어떻게 동작하는지

JIT 컴파일(just-in-time compliation) 또는 동적 번역(dynamic translation) 이라고 한다

JIT 같은 경우에는 프로그램을 실제 실행하는 시점에서 기계어로 번역하는 컴파일러다

인터프리터 방식의 단점을 보완하기 위해서 도입되었으며, 인터프리터 방식으로 실행하다 적절한 시점에 바이트 코드 전체를 컴파일하여 기계어로 변경, 이후 더 이상 인터프리팅 하지 않고 기계어로 직접 실행함

<aside>
🎃 **인터프리터란**
소스 코드를 한 줄씩 읽어 실행하는 컴퓨터 프로그램입니다. 인터프리터 언어는 보통 컴파일러 언어보다 실행이 느리지만(매번 번역해야 해서), 이식성이 높은 편입니다. 이는 운영체제나 하드웨어에 독립적이기 때문입니다.

</aside>

기계어는(컴파일된 코드) 캐시에 보관하기에 한번 컴파일된 코드는 빠르게 수행함

JIT 컴파일러가 컴파일 하는 과정은 바이트 코드를 인터프리팅 하는 것 보다 훨씬 오래걸려서 한 번만 실행되는 코드는 컴파일 하지 않고 인터프리팅 하는것이 유리

그래서 JIT 컴파일러를 사용하는 JVM은 내부적으로 해당 메서드가 얼마나 자주 수행되는지 체크하고 일정 정도를 넣을때만 컴파일 수행함

자바에서는 Java compiler가 자바 프로그램 코드를 바이트 코드로 변환한 다음, 
실제 바이트 코드 실행하는 시점에서 자바 가상 머신(JVM 정확힌, JRE)이 바이트 코드를 JIT 컴파일 통해 기계어로 변환

### JVM 구성 요소

![Untitled](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FtclVx%2Fbtq4Xfml6Dy%2Fnzb5xxlGG1fr5iBGUMv77K%2Fimg.png)

- 클래스 로더(Class Loader)
- 실행 엔진(Execution Engine)
    - 인터프리터(Interpreter)
    - JIT 컴파일러(Just-in-Time)
    - 가비지 콜렉터(Garbage collector)
- 런타임 데이터 영역(Runtime Data Area)

**클래스 로더**

JVM 안으로 클래스 파일(*.class)을 로드하고, 링크를 통해 배치하는 작업을 수행하는 모듈

런 타임시 동적으로 클래스를 로드해 jar 파일 내 저장된 클래스들을 JVM 위에 탑재한다

즉, 클래스를 처음 참조할 때, 해당 클래스 로드하고 링크하는 역할을 한다

**실행 엔진**

클래스 실행, 클래스 로더가 JVM내의 런타임 영역에 바이트 코드를 배치시키고, 이것이 실행 엔진에 의해 실행됨

자바 바이트 코드상태는(*.class) 기계보다는 인간이 보기 편한 형태로 기술됨, 그래서 실행 엔진을 통해 실제 JVM 내부에서 기계가 실행할수 있는 형태로 변경함

→ 인터프리터

실행엔진은 자바 바이트 코드를 명령어 단위로 읽어서 실행함

but 한 줄씩 읽어 수행해 느린단점이 있음

→ JIT(Just-In-Time)

인터프리터 방식으로 하다 적절한 시점에 바이트 코드 전체를 컴파일하여 기계어로 변경하고, 이후 더 이상 인터프리팅 하지않고 기계어로 직접실행함

**가비지 콜렉터**

더이상 사용되지 않는 인스턴스를 찾아 메모리에서 삭제

Runtime Data Area

![프로그램 수행을 위해 OS에서 할당받은 메모리 공간](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FcEjHLD%2Fbtq4YtqCAGY%2FrrVrI45UWSH2LqslkP8Wg0%2Fimg.png)

프로그램 수행을 위해 OS에서 할당받은 메모리 공간

→ PC Register

Thread 가 시작될 때 생성되며 생성될 때마다 생성되는 공간으로, 스레드마다 하나씩 존재

Thread 가 어떤 부분을 어떤 명령으로 실행해야 할 지에 대한 기록을 하는 부분, 현재 수행 중인 JVM 명령의 주소를 가짐

<aside>
🎃 **프로세스** 란?
단순히 실행중인 프로그램
 
사용자가 작성한 프로그램이 운영체제에 의해 메모리 공간을 할당받아 실행 중인 것
이런 프로세스는 프로그램에 사용되는 데이터와 메모리 등의 자원, 스레드로 구성

</aside>

<aside>
🎃 **스레드** 란?
프로세스 내에서 실제 작업 수행하는 주체

모든 프로세스에는 한 개 이상의 스레드 존재
두 개 이상의 스레드 가지는 프로세스는 멀티 스레드 프로세스라 불림

</aside>

→ JVM 스택 영역

프로그램 실행하며 임시로 할당했다 메소드 빠지면 소멸되는 특성의 데이터 저장 영역

메소드 호출 때 마다 각각의 스택 프레임(그 메서드만을 위한 공간)이 생성됨, 메서드 끝나면 삭제

메소드 안 사용되는 값들 저장, 매개변수, 지역변수, 리턴 값, 연산시 일어나는 값들 저장

각 스레드마다 하나씩 존재

→ Native method stack

자바 프로그램이 컴파일되어 생성되는 바이트 코드가 아닌 실제 실행 할 수 있는 기계어로 작성된 프로그램을 실행시키는 영역

Java가 아닌 다른 언어로 작성된 코드를 위한 공간

Java Native Interface를 통해 바이트 코드로 전환하여 저장하게 됨

일반 프로그램과 같이 커널이 스택을 잡아 독자적으로 프로그램을 실행시키는 영역

→ Method Area( = Class Area = Static area)

클래스 정보를 처음 메모리 공간에 올릴 때 초기화 되는 대상을 저장하기 위한 메모리 공간 (전역변수)

→ Runtime Constant Pool

스태틱 영역에 존재하는 별도 관리영역

상수 자료형을 저장하여 참조하고 중복을 막는 역할 수행 (final, 상수)

<aside>
🎃 **스태틱 영역에 저장되는 데이터**

Field Information (멤버 변수)
멤버변수 이름, 데이터 타입, 접근 제어자 정보

Method Information (메소드)
메소드 이름, 리턴타입, 매개변수, 접근 제어자 정보

Type Information(타입)
class 인지 interface 인지 여부 저장, Type 속성, 전체 이름, super 클래스의 전체이름 (interface 이거나 object 이면 제외됨, 둘은 Heap 에서 관리함)

</aside>

**↑** class 정보, static 변수, 메소드 정보, 생성자 분류해 저장. 스레드가 공유함

↓ 객체와 배열 생성, new 연산 통한 인스턴스 변수, 참조 변수

→ Heap 영역

![Untitled](https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FmxiE4%2Fbtq4Y5pwyCR%2F3nO3XIf20wUUTrzMKvn5yk%2Fimg.png)

객체를 저장하는 가상메모리 공간, new 연산자로 생성되는 객체와 배열 저장

Class Area(Static Area) 에 올라온 클래스들만 객체로 생성 가능

3부분으로 나뉘어 짐

→ Permanent Generation (영구적 세대)

생성된 객체들의 정보 주소값 저장된 공간, 클래스 로더에 의해 load 되는 Class, Method 등에 대한 Meta 정보가 저장되는 영역, JVM에 의해 사용됨

Reflection 을 사용하여 동적으로 클래스 로딩되는 경우 사용

<aside>
🎃 **Reflection** 이란?

객체를 통해 클래스의 정보를 분석해 내는 프로그래밍 기법.
구체적 클래스 타입을 알지 못해도, 컴파일된 바이트 코드 통해 역으로 클래스의 정보를 알아내어 사용

</aside>

→ New / Young 영역

여기 인스턴스는 추후 **Garbage collector** 에 의해 사라짐

생명 주기 짧은 “젊은 객체” 를 GC 대상으로 하는 영역, 여기서 일어나는 Garbage collector 를 Minor GC라 함

→ Eden : 객체 최소 생성되는 공간

→ Survivor 0, 1 : Eden에서 참조되는 객체들이 저장되는 공간

<aside>
🎃 Eden 영역에 객체가 가득차면 첫번째 Garbage collector 가 발생
Eden 영역에 있던 값들이 Survivor 1 영역에 복사되고 이 영역을 제외한 나머지 객체를 삭제함

</aside>

→ Old 영역

여기 인스턴스는 추후 **Garbage collector** 에 의해 사라짐

생명 주기 긴 “오래된 객체” 를 GC 대상으로 하는 영역, 여기서 일어나는 Garbage collector를 Major GC 라 함. Minor GC에 비해 속도가 느림

New / Young Area 에서 일정시간 참조되고 있는, 살아남은 객체가 저장되는 공간

<aside>
🎃 **Garbage collector** 란

자바의 메모리 관리 방법 중 하나, JVM의 Heap 영역에서 동적으로 할당했던 메모리 영역 중 필요 없게 된 메모리 영역을 주기적으로 삭제

</aside>

### JDK와 JRE의 차이

JDK 

Java Development Kit (자바 개발 키트)

Java를 사용하기 위해 필요한 모든 기능을 갖춘 Java 용 SDK (Software Development Kit)

JDK 는 JRE 를 포함하고 있다, JRE에 있는 모든 것 뿐만 아니라 컴파일러(javac)와 jdb, javadoc 와 같은 도구도 있다

따라서 JDK 는 프로그램을 **생성**, **실행**, **컴파일** 할 수 있다

JRE 

Java Runtime Environment (자바 런타임 환경)

JVM + 자바 클래스 라이브러리(Java Class Library) 등으로 구성되어 있다

컴파일 된 Java 프로그램을 실행 하는데 필요한 패키지다

> JDK 는 자바 프로그램을 실행, 컴파일, 자바 개발 도구
JRE, JVM 을 모두 포함하는 포괄적 키트다

JRE는 자바 프로그램을 실행할 수 있게 하는 도구다. JVM을 포함하고 있다
> 

<aside>
🎃 **SDK(Software Development Kif)** 란

소프트웨어 개발 키드로 하드웨어 플랫폼, 운영체제 또는 프로그래밍 언어 제작사가 제공하는 툴이다. 키트의 요소는 제작사 마다 다르며 대표적으로 JDK 가 있다
SDK를 활용하여 애플리캐이션을 개발할 수 있다

</aside>

참조 

[https://doozi0316.tistory.com/entry/1주차-JVM은-무엇이며-자바-코드는-어떻게-실행하는-것인가](https://doozi0316.tistory.com/entry/1%EC%A3%BC%EC%B0%A8-JVM%EC%9D%80-%EB%AC%B4%EC%97%87%EC%9D%B4%EB%A9%B0-%EC%9E%90%EB%B0%94-%EC%BD%94%EB%93%9C%EB%8A%94-%EC%96%B4%EB%96%BB%EA%B2%8C-%EC%8B%A4%ED%96%89%ED%95%98%EB%8A%94-%EA%B2%83%EC%9D%B8%EA%B0%80)

---