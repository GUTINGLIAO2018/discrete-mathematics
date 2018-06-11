// ��ɢ��ѧʵ����
#include "graphTheory.h"

using namespace std;

int main() {
    graphTheory graph;
    while (true) {
        system("cls");
        cout << "============================================" << endl
             << "�����������ѡ������0�˳�����" << endl
             << "1.�������" << endl
             << "2.��ÿ�����" << endl
             << "3.�ж�ͼ������" << endl
             << "4.��Warshall�㷨�ж�ͼ�Ƿ���ͨ" << endl
             << "5.����A�������֮���Խ����" << endl
             << "6.��PowellȾɫ�㷨�Խڵ�Ⱦɫ" << endl
             << "7.��Kruskal�㷨����С������" << endl
             << "8.��Prim�㷨����С������" << endl
             << "============================================" << endl;
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        system("cls");
        switch (n) {
            case 1:
                graph.input();
                break;
            case 2:
                graph.calculateDegree();
                break;
            case 3:
                graph.isEuler();
                graph.isHamilton();
                break;
            case 4:
                graph.warShall();
                break;
            case 5:
                graph.exponentiation();
                break;
            case 6:
                graph.powell();
                break;
            case 7:
                graph.kruskal();
                break;
            case 8:
                graph.prim();
                break;
        }
        system("pause");
    }
}