import java.util.ArrayList;
class Solution {
    public int[] solution(int[] answers) {

		int[] s1 = { 1, 2, 3, 4, 5 };
		int[] s2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
		int[] s3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

		int[] cnt = new int[3];

		// 정답과 찍은답과 비교하여 동일한 경우 cnt ++
		for (int i = 0; i < answers.length; i++) {
			if (answers[i] == s1[i % 5]) {
				cnt[0]++;
			}
			if (answers[i] == s2[i % 8]) {
				cnt[1]++;
			}
			if (answers[i] == s3[i % 10]) {
				cnt[2]++;
			}
		}


		int max = Math.max(cnt[0], Math.max(cnt[1], cnt[2]));
		ArrayList<Integer> answerList = new ArrayList<Integer>();

		if (cnt[0] >= max) {
			answerList.add(1);
			System.out.println(111);
		}
		if (cnt[1] >= max) {
			answerList.add(2);
			System.out.println(222);
		}
		if (cnt[2] >= max) {
			answerList.add(3);
			System.out.println(333);
		}
		int[] answer = new int[answerList.size()]; // 출력값은 win List에 추가된 학생 수와 동일하도록 길이 조정
		for (int i = 0; i < answer.length; i++) {
			answer[i] = answerList.get(i);
		}
		return answer;
    }
}

/*
문제 설명
수포자는 수학을 포기한 사람의 준말입니다. 수포자 삼인방은 모의고사에 수학 문제를 전부 찍으려 합니다. 수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍습니다.

1번 수포자가 찍는 방식: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
2번 수포자가 찍는 방식: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
3번 수포자가 찍는 방식: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...

1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가 주어졌을 때, 가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return 하도록 solution 함수를 작성해주세요.

제한 조건
시험은 최대 10,000 문제로 구성되어있습니다.
문제의 정답은 1, 2, 3, 4, 5중 하나입니다.
가장 높은 점수를 받은 사람이 여럿일 경우, return하는 값을 오름차순 정렬해주세요.
*/
