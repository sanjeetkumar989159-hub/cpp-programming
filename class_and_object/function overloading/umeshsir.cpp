//WAP to describe virat kohli performance and ensure atleast four function overloading must be ther and it will be justify of cricket

#include <iostream>
using namespace std;

class CricketStats {
public:
    int performance(int t20_runs) {
        cout << "Virat Kohli scored " << t20_runs << " runs in T20 cricket." << endl;
        return t20_runs;
    }
    int performance(int odi_runs, int odi_matches) {
        cout << "Virat Kohli scored " << odi_runs << " runs in "
             << odi_matches << " ODI matches." << endl;
        return odi_runs;
    }

    int performance(int test_runs, int test_matches, int centuries) {
        cout << "Virat Kohli scored " << test_runs << " runs in "
             << test_matches << " Test matches with "
             << centuries << " centuries." << endl;
        return test_runs;
    }

    int performance(int runs, int matches, int centuries, int half_centuries) {
        cout << "Virat Kohli scored " << runs << " runs in "
             << matches << " matches with " << centuries
             << " centuries and " << half_centuries
             << " half-centuries." << endl;
        return runs;
    }

    int performance(int ipl_runs, int ipl_matches, int ipl_centuries,
                    int ipl_half_centuries, string tournament) {
        cout << "Virat Kohli scored " << ipl_runs << " runs in "
             << ipl_matches << " " << tournament << " matches with "
             << ipl_centuries << " centuries and "
             << ipl_half_centuries << " half-centuries." << endl;
        return ipl_runs;
    }
};

int main() {
    CricketStats virat;

    virat.performance(1200);
    virat.performance(12000, 250);
    virat.performance(7000, 100, 27);
    virat.performance(15000, 400, 43, 58);
    virat.performance(8000, 250, 8, 55, "IPL");

    return 0;
}
