#ifndef PROCESS_MANAGER_HPP
#define PROCESS_MANAGER_HPP

#include"Task.hpp"
#include<queue>
#include<memory>

class ProcessManagement
{
    public:
    ProcessManagement();
    bool submitToQueue(std::unique_ptr<Task> task);
    void executeTasks();

    private:
    std::queue<std::unique_ptr<Task>> taskQueue;

};


#endif //PROCESS_MANAGER_HPP