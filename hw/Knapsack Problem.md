# 🎒Knapsack Problem

## 배낭 문제

조합 최적화의 유명한 문제이다.

한 여행가가 가지고 가는 배낭에 담을 수 있는 무게의 최댓값이 정해져 있고, 일정 가치와 무게가 있는 짐들을 배낭에 넣을 때, 가치의 합이 최대가 되도록 짐을 고르는 방법을 찾는 문제

이 배낭문제는 짐을 쪼갤 수 있는 경우(무게가 [소수](https://ko.wikipedia.org/wiki/%EC%86%8C%EC%88%98_(%EA%B8%B0%EC%88%98%EB%B2%95))일 수 있는 경우)와 짐을 쪼갤 수 없는 경우(이 경우 짐의 무게는 0 이상의 정수만 가능) 두 가지로 나눌 수 있는데, 짐을 쪼갤 수 있는 경우의 배낭문제를 **분할가능 배낭문제**(Fractional Knapsack Problem), 짐을 쪼갤 수 없는 경우의 배낭문제를 **0-1 배낭문제**(0-1 Knapsack Problem)라 부른다.

이 문제는 쪼갤 수 있는 경우에는 [그리디 알고리즘](https://ko.wikipedia.org/wiki/%EA%B7%B8%EB%A6%AC%EB%94%94_%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98)으로 [다항 시간](https://ko.wikipedia.org/wiki/%EB%8B%A4%ED%95%AD_%EC%8B%9C%EA%B0%84)에, 쪼갤 수 없는 경우에는 [동적계획법](https://ko.wikipedia.org/wiki/%EB%8F%99%EC%A0%81%EA%B3%84%ED%9A%8D%EB%B2%95)(Dynamic Programming)등으로 [의사 다항 시간](https://ko.wikipedia.org/w/index.php?title=%EC%9D%98%EC%82%AC_%EB%8B%A4%ED%95%AD_%EC%8B%9C%EA%B0%84&action=edit&redlink=1)에 풀 수 있다.



### 짐을 쪼갤 수 없는 0-1 배낭 문제

**Dynamic Programming** 기본 문제



[12865번: 평범한 배낭](https://www.acmicpc.net/problem/12865)

해당 문제로 처음 풀었을 때 `틀렸습니다` 뜬 코드



```c++
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/* 평범한 배낭
HOW TO SOLVE: 재귀
*/

int N, K;
vector<pair<int, int>> info;

int recursive(int index, int finalW, int ans) {
	if (index >= N) return ans;
	int weight = info[index].first;
	int value = info[index].second;
	if (finalW + weight <= K) {
		//넣을 수 있는 짐
		ans = recursive(index + 1, finalW + weight, ans + value);
	}
	else {
		//넣을 수 없는 짐
		ans = max(ans, recursive(index + 1, finalW, ans));
	}
	return ans;
}

int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		int W, V;
		cin >> W >> V;
		info.push_back({ W,V });
	}
	int result = -987654321;
	for (int i = 0; i < N; i++) {
		result = max(result, recursive(i, 0, 0));
	}
	cout << result;
}
```



**반례 케이스**

    wrong! 264 != 263
    7 19
    9 89
    8 80
    1 32
    6 68
    2 74
    3 42
    7 2
    wrong! 23 != 22
    6 9
    3 6
    2 7
    4 6
    4 2
    4 10
    1 5
    wrong! 31 != 29
    9 10
    1 8
    5 10
    4 10
    2 6
    4 5
    4 7
    3 7
    4 7
    1 4
    wrong! 26 != 25
    6 7
    3 7
    3 10
    1 6
    2 7
    3 5
    2 9
    wrong! 19 != 18
    7 9
    3 6
    2 4
    2 5
    3 4
    1 3
    4 1
    2 4
    wrong! 20 != 18
    7 7
    1 4
    3 1
    3 6
    2 6
    3 8
    3 4
    2 6
    wrong! 17 != 16
    5 9
    2 4
    1 3
    3 5
    4 8
    2 1
    wrong! 31 != 28
    8 9
    1 4
    2 7
    3 10
    2 7
    2 7
    4 8
    3 5
    4 1
    wrong! 38 != 37
    9 10
    4 2
    4 9
    1 5
    1 7
    2 8
    3 9
    2 8
    2 6
    3 5
    wrong! 21 != 20
    5 7
    3 8
    1 5
    2 7
    2 2
    2 6
    wrong! 30 != 29
    10 10
    1 2
    4 9
    1 5
    4 8
    4 1
    1 7
    3 2
    3 7
    2 5
    5 2
    wrong! 24 != 23
    9 7
    1 1
    1 4
    3 10
    2 1
    2 7
    3 8
    3 9
    3 3
    2 7
    wrong! 37 != 36
    9 9
    2 9
    1 7
    3 10
    2 2
    3 3
    4 9
    2 10
    2 8
    3 2

→ 문제 예제만 맞고 다 틀림

else 빼고 인덱스 옮겨서 하려고 하니깐 ans값이 누적되서 나왔다. 그래서 ans=0하고 아래와 같이 코드를 바꿨더니 반례케이스들 답은 다 나온다. 하지만,

`시간초과`

```c++
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, K;
vector<pair<int, int>> info;

int recursive(int index, int finalW) {
	int ans = 0;
	if (index >= N) return ans;
	int weight = info[index].first;
	int value = info[index].second;
	if (finalW + weight <= K) {
		//넣을 수 있는 짐
		ans = recursive(index + 1, finalW + weight) + value;
	}
	ans =max(ans,recursive(index + 1, finalW));
	return ans;
}
int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		int W, V;
		cin >> W >> V;
		info.push_back({ W,V });
	}
	int result = recursive(0, 0);
	cout << result;
}
```



**다이나믹 프로그래밍으로 푼 코드**

```c++
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

/* 평범한 배낭
TYPE: Dynamic Programming

큰 문제를 작은 문제로 나뉘어 푸는 기법, 작은 문제가 반복되는 지 확인한다.
*/

int N, K;
vector<pair<int, int>> info;
int dp[100001][1001];
   int main() {
    	cin >> N >> K;
    	memset(dp, 0, sizeof(dp));
    	for (int i = 0; i < N; i++) {
    		int W, V;
    		cin >> W >> V;
    		info.push_back({ W,V });
    	}
    	for (int i = 0; i < N; i++) { //i:index
    		for (int j = 0; j <= K; j++) { //j:weight
    			if (i == 0) {
    				if (info[i].first <= j) dp[i][j] = info[i].second;
    				continue;
    			}
    			if (info[i].first <= j) dp[i][j] = max(dp[i - 1][j], info[i].second + dp[i - 1][j - info[i].first]);
    			else dp[i][j] = dp[i - 1][j];
    		}
    	}
       cout << dp[N-1][K];
}
```

 

주어진 물건들을 하나씩 보면서 다음과 같은 경우의 수로 나눌 수 있다. 물건 하나를 볼 때 그 물건을 무게 0~K까지의 모든 경우에 넣어보고 넣을 수 없다면 이전 물건을 그대로 가져가고, 넣을 수 있다면 가져갈지 말지 결정한다.

물건 리스트 중 처음이라면 일단 무게가 되는 한 배낭에 넣는다. 그다음부터 새 물건을 넣을 수 없다면 이전 물건을 그대로 가져간다. 하지만 넣을 수 있다면 그냥 이전 물건을 가져갔을 때 얻는 가치 vs. 현재 물건의 무게만큼 여유가 있는 상태였을 때 이전 물건들 + 현재 물건의 가치 중 최댓값을 취한다.

## Reference

[배낭 문제](https://ko.wikipedia.org/wiki/%EB%B0%B0%EB%82%AD_%EB%AC%B8%EC%A0%9C)

[[알고리즘] 배낭 알고리즘(Knapsack algorithm) 기본 개념과 구현 방법](https://reakwon.tistory.com/34)

[백준 12865번 : 평범한 배낭](https://sihyungyou.github.io/baekjoon-12865/)

https://youtu.be/frlRE7bRIDo