//#include <iostream>
//using namespace std;
//
//int main()
//{
//    cout << "FOR LOOP" << endl;
//    for (int i = 0; i < 3; i++) {
//        cout << i << endl;
//    }
//
//    cout << "WHILE LOOP" << endl;
//    int i = 0;
//    while (i < 3) {
//        cout << i << endl;
//        i++;
//    }
//
//    cout << "DO WHILE LOOP" << endl;
//    int j = 0;
//    do {
//        cout << j << endl;
//        j++;
//    } while (j < 3);
//
//
//    cout << "num  " << "num+1  " << "num+2" << endl;
//    for (int i = 0; i < 3; i++){
//        cout << i << "     " << i + 1 << "     " << i + 2 << endl;
//
//    }
//
//
//    cout << "num  " << "num+1  " << "num+2" << endl;
//    int k = 0;
//    while (k < 3) {
//        cout << k << "     " << k + 1 << "     " << k + 2 << endl;
//        k++;
//    }
//
//
//    cout << "num  " << "num+1  " << "num+2" << endl;
//    int m = 0;
//    do
//    {
//        cout << m << "     " << m + 1 << "     " << m + 2 << endl;
//        m++;
//    } while (m < 3);
//
//
//    cout << "num  " << "num+1  " << "num+2" << endl;
//    for (int i = 0; i < 3; i++){
//        if (i == 1){
//            continue;  // skips the iteration for 4 completely
//            //break;  // breaks out of loop completely and moves on with program
//        }
//        cout << i << "     " << i + 1 << "     " << i + 2 << endl;
//    }
//
//    cout << "NESTED LOOP" << endl;
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 2; j++)
//        {
//            cout << "i=" << i << "    " << "j=" << j << endl;
//            if (j==0)
//            {
//                //continue;
//                break;  // will break out of nested loop only; original loop will keep looping
//            }
//            cout << "hello" << endl;
//        }
//    }
//}