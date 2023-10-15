#include <iostream>
#include <vector>
#include <algorithm>

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
};

bool compareArrivalTime(const Process &a, const Process &b) {
    return a.arrivalTime < b.arrivalTime;
}

bool compareBurstTime(const Process &a, const Process &b) {
    return a.burstTime < b.burstTime;
}

void sjf(std::vector<Process> &processes) {
    std::sort(processes.begin(), processes.end(), compareArrivalTime);
    
    int n = processes.size();
    std::vector<int> completionTime(n, 0);
    std::vector<bool> processed(n, false);
    int currentTime = 0;
    int totalWaitingTime = 0;

    for (int i = 0; i < n; i++) {
        int shortest = -1;
        for (int j = 0; j < n; j++) {
            if (!processed[j] && processes[j].arrivalTime <= currentTime) {
                if (shortest == -1 || processes[j].burstTime < processes[shortest].burstTime) {
                    shortest = j;
                }
            }
        }

        if (shortest == -1) {
            currentTime++;
        } else {
            completionTime[shortest] = currentTime + processes[shortest].burstTime;
            totalWaitingTime += currentTime - processes[shortest].arrivalTime;
            processed[shortest] = true;
            currentTime += processes[shortest].burstTime;
        }
    }

    std::cout << "Process\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\n";
    for (int i = 0; i < n; i++) {
        std::cout << "P" << processes[i].id << "\t" << processes[i].arrivalTime << "\t\t" << processes[i].burstTime
                  << "\t\t" << completionTime[i] << "\t\t" << (completionTime[i] - processes[i].arrivalTime) << "\n";
    }

    double averageWaitingTime = static_cast<double>(totalWaitingTime) / n;
    std::cout << "Average Waiting Time: " << averageWaitingTime << "\n";
}

int main() {
    std::vector<Process> processes = {
        {1, 0, 6},
        {2, 1, 8},
        {3, 2, 7},
        {4, 3, 3}
    };

    sjf(processes);

    return 0;
}
