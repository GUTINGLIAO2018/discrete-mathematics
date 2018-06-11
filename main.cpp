// 离散数学实验七
#include "graphTheory.h"

using namespace std;

int main() {
    graphTheory graph;
    while (true) {
        system("cls");
        cout << "============================================" << endl
             << "输入命令进行选择（输入0退出）：" << endl
             << "1.输入矩阵" << endl
             << "2.求每点度数" << endl
             << "3.判断图形性质" << endl
             << "4.用Warshall算法判断图是否连通" << endl
             << "5.计算A中任意点之间跨越边数" << endl
             << "6.用Powell染色算法对节点染色" << endl
             << "7.用Kruskal算法求最小生成树" << endl
             << "8.用Prim算法求最小生成树" << endl
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