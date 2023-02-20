package org.example;

public class User {
    private String password;

    public void initPassword(PasswordGenerator passwordGenerator) {
        // as-is
        // RandomPasswordGenerator randomPasswordGenerator = new RandomPasswordGenerator();
        // Random Generator 가 얼만큼 작성하는지 모르기에 테스트코드를 작성하는데 어려움.. 그래서 인터페이스를 만든다.

        // to-be
        String password = passwordGenerator.generatePassword();

        if (password.length() >= 8 && password.length() <= 12) {
            this.password = password;
        }
    }

    public String getPassword() {
        return password;
    }
}
