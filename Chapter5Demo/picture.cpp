#include <iostream>

using namespace std;

/**           ��ʽ

        //���ѭ�������У����������У�
        //�ڲ�ѭ�������У��������е�ͼ�Σ�

        //��ӡͼ��
        //˫ѭ����Ƕ��ѭ����
int main(){
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++){
            cout << "*" ;
        }
        cout << endl;
    }
}
*/
/**      ��չ1


           *
          ***
         *****
        *******
         *****
          ***
           *
                   ͼ��һ����������
                    ͼ�ζ�����������

        //��ӡ
int main(){
    //�ϰ벿��
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<= 2-i ; j++){
            cout << " " ;
        }
        for(int k=0 ; k<= 2*i ; k++){
           // cout << (char)('A' + i);
           cout << "*" ;
        }
        cout << endl;
    }

    //�°벿��
     for(int l=0 ; l<3 ; l++){
        for(int m=0 ; m <= l ; m++){
            cout << " " ;
        }
        for(int n=0 ; n <= 4-2*l ; n++){
           // cout << (char)('E' + l);
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}


/**            ��չ2

                *
               * *
              *   *
             *     *
              *   *
               * *
                *
*/
int main(){
    //�ϰ벿��
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<= 2-i ; j++){
            cout << " " ;
        }
        for(int k=0 ; k<= 2*i ; k++){
           //k�Ǽ�ֵ������´�ӡ�Ǻţ�������ӡ�ո�
           if(k == 0 || k == 2*i){
                cout << "*";
           }else{
                cout << " ";
           }
        }
        cout << endl;
    }

    //�°벿��
     for(int l=0 ; l<3 ; l++){
        for(int m=0 ; m <= l ; m++){
            cout << " " ;
        }
        for(int n=0 ; n <= 4-2*l ; n++){
           //n�Ǽ�ֵ������´�ӡ�Ǻţ�������ӡ�ո�
           if(n == 0 || n == 4-2*l){
                cout << "*" ;
           }else{
               cout << " " ;
           }
        }
        cout << endl;
    }
    return 0;
}
