#define  _CRT_SECURE_NO_WARNINGS 1




//#include<stdio.h>
//int main()
//{
//	printf("好好学习，天天编程\n");
//	return 0;
//}
//
//#include<stdio.h>
//
////数组的几种创建方式
//int main()
//{
//	int arr1[3] = {1,2,3};//第一种,完全初始化；
//	int arr2[] = { 1,2,3 };//第二种，与第一种等价；
//	int arr3[3] = {1,};//不完全初始化；
//
//	return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}



//#include<stdio.h>
//
//
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//
//	return 0;
//}

//
//enum Voice
//{
//    X1 = C2, X2 = D2, X3 = E2, X4 = F2, X5 = G2, X6 = A2, X7 = B2,
//    L1 = C3, L2 = D3, L3 = E3, L4 = F3, L5 = G3, L6 = A3, L7 = B3,
//    M1 = C4, M2 = D4, M3 = E4, M4 = F4, M5 = G4, M6 = A4, M7 = B4,
//    H1 = C5, H2 = D5, H3 = E5, H4 = F5, H5 = G5, H6 = A5, H7 = B5,
//    LOW_SPEED = 500, MIDDLE_SPEED = 400, HIGH_SPEED = 300,
//    _ = 0XFF
//};
//void Wind()
//{
//    HMIDIOUT handle;
//    midiOutOpen(&handle, 0, 0, 0, CALLBACK_NULL);
//    int volume = 0x7f;
//    int voice = 0x0;
//    int sleep = 350;
//    int  wind【】 ={};
//    for (auto i : wind) {
//        if (i == LOW_SPEED || i == HIGH_SPEED || i == MIDDLE_SPEED) {
//            sleep = i;//Sleep(i/2);
//            continue;
//        }
//        if (i == 0) { sleep = 175; continue; }
//        if (i == 700) { Sleep(175); continue; }
//        if (i == _) {
//            Sleep(350);
//            continue;
//        }
//        // if (i == 900)  volume += 100;
//        voice = (volume << 16) + ((i) << 8) + 0x90;
//        midiOutShortMsg(handle, voice);
//        cout << voice << endl;
//        Sleep(sleep);
//    }
//    midiOutClose(handle);
//}
//
//int main()
//{
//
//    Wind();
//    return 0;
//}