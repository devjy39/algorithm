Practice
===

문제 설명
---

프리랜서로 일하고 있는 개발자가   
아래와 같은 프로젝트 수주 가능 리스트를 보고 고민에 빠졌다.  

N 일 까지의 프로젝트 수주 가능 리스트는 다음과 같다. (N = 5 인 경우)

|        | 1일  | 2일  | 3일  | 4일  | 5일  |
|--------|-----|-----|-----|-----|-----|
| Days   | 2   | 1   | 3   | 2   | 2   |
| Prices | 10  | 20  | 30  | 40  | 60  |

다음달,  
1일에는 기간이 2일이 소요되고 가격이 10인 프로젝트 진행이 가능하다.  
2일에는 기간이 1일이 소요되고 가격이 20인 프로젝트 진행이 가능하다.  
...  
5일에는 기간이 2일이 소요되고 가격이 60인 프로젝트 진행이 가능하다.

개발자는 N 일 다음날에는 해외 출장 건으로 자리를 비워야 해서 업무가 불가능 하다.  
N일 기간 내에 어떻게 프로젝트를 선택해 진행하면  
수익이 가장 높은지 알아보는 프로그램을 만들어보자.


입력 형식
---
N 은 1 ~ 10 사이의 자연수이다.  
Days 는 1 ~ 5 사이의 자연수로 이루어진 배열이다.  
Prices 는 1 ~ 500 사이의 자연수로 이루어진 배열이다.  


출력 형식
---
수익이 가장 높은 경우의 결과를 반환한다.  


입출력 예시
---

| Days                     | Prices                            | Result |
|--------------------------|-----------------------------------|--------|
| {2, 1, 3, 2, 2}          | {10, 20, 30, 40, 60}              | 60     |
| {3, 3, 3, 1, 2, 3, 2, 2} | {50, 150, 20, 30, 10, 10, 30, 30} | 190    |
