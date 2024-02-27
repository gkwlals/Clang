#include<stdio.h>
#include<stdlib.h>
typedef struct Coffee {
   char name[20];
   int price;
}Coffee;

typedef struct Node {
   Coffee data;
   struct Node* next;
}Node;

Node* createNode() {
   Node* newNode;
   newNode = (Node*)malloc(sizeof(Node));
   printf("커피 이름:");
   scanf("%s", &newNode->data.name);
   printf("커피 가격:");
   scanf("%d", &newNode->data.price);
   newNode->next = NULL;
   return newNode;
}

void appendNode(Node** head) {
   Node* newNode;
   newNode = createNode();
   if (*head == NULL) {
      *head = newNode;
   }
   else {
      Node* horse;
      horse = *head;
      while (horse->next != NULL) {
         horse = horse->next;
      }
      horse->next = newNode;
   }
}
void deleteLastNode(Node** head) {

   Node* horse;
   horse = *head;
   if (horse == NULL) {
      printf("삭제할 커피가 없습니다.\n");
   }
   else if(horse->next == NULL){
      *head = NULL;
      printf("커피 %s를 삭제했습니다.\n", horse->data.name);
      free(horse);
   }
   else {
      while (horse->next->next != NULL) {
         horse = horse->next;
      }

      Node* deleteTarget = horse->next;
      printf("데이터 %d가 삭제되었습니다.\n", deleteTarget->data.name);
      horse->next = NULL;
      free(deleteTarget);
      return;
   }
}

void printNode(Node** head) {
   Node* horse;
   horse = *head;
   if (horse == NULL) {
      printf("커피가 없습니다.\n");
      return;
   }
   while (horse->next != NULL) {
      printf("커피 이름:%s 커피 가격:%d \n", horse->data.name, horse->data.price);
      horse = horse->next;
   }
   printf("커피 이름:%s 커피 가격:%d \n", horse->data.name, horse->data.price);
}

void deleteNode(Node **head) {
   Node* horse;
   horse = *head;
   if (horse == NULL) {
      printf("삭제할 커피가 없습니다.\n");
      return;
   }

   int order;
   printf("삭제할 커피 순서 선택:");
   scanf("%d", &order);
   
   if (order == 1) {
      *head = horse->next;
      free(horse);
      return;
   }

   for (int i = 1; i < order - 1 && horse != NULL; i++) {
      horse = horse->next;
   }

   if (horse == NULL || horse->next == NULL) {
      printf("Position does not exist.\n");
      return;
   }
   // temp->next가 삭제할 노드를 가리키므로 temp->next를 삭제할 노드의 다음 노드로 변경
   Node* next = horse->next->next;
   // 삭제할 노드 메모리 해제
   free(horse->next);
   // 이전 노드가 삭제할 노드의 다음 노드를 가리키도록 변경
   horse->next = next;
}



int main() {
   Node* head = NULL;
   while (1) {
      int systemNumber;
      printf("커피 메뉴 프로그램\n");
      printf("1.커피 추가 2.커피 삭제 3.커피 보여주기 4. 종료:");
      scanf("%d", &systemNumber);
      switch (systemNumber)
      {
      case 1:
         appendNode(&head);
         break;
      case 2:
         //deleteLastNode(&head);
         deleteNode(&head);
         break;
      case 3:
         printNode(&head);
         break;
      case 4:
         printf("프로그램 종료 ㅅㄱ\n");
         return 0;
      default:
         printf("프로그램 번호 입력 오류\n");
         break;
      }
   }


}
