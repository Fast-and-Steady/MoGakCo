n, m = map(int, input().split())
array = [0] * n
for i in range(m):
    i, j, k = map(int, input().split())
    array[i - 1 : j] = [k] * (j - i + 1)
print(*array)

'''
첫째 줄에 N (1 ≤ N ≤ 100)과 M (1 ≤ M ≤ 100)이 주어진다.
둘째 줄부터 M개의 줄에 걸쳐서 공을 넣는 방법이 주어진다. 각 방법은 세 정수 i j k로 이루어져 있으며,
i번 바구니부터 j번 바구니까지에 k번 번호가 적혀져 있는 공을 넣는다는 뜻이다.
예를 들어, 2 5 6은 2번 바구니부터 5번 바구니까지에 6번 공을 넣는다는 뜻이다. 
(1 ≤ i ≤ j ≤ N, 1 ≤ k ≤ N)
도현이는 입력으로 주어진 순서대로 공을 넣는다.


N 만큼의 길이를 가진 배열을 만들고 m번 반복하며 i부터 j까지의 인덱스에 k라는 수를 덮어 씌웠을 때의 결과를 출력해야 한다.

https://my-coding-notes.tistory.com/650
'''