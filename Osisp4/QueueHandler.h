#pragma once

#include <Windows.h>
#include <vector>
#include "TaskQueue.h"

class QueueHandler
{
private:
	TaskQueue* queue;
	static DWORD ProcessTask(void* vqueue);

public:
	QueueHandler(TaskQueue* queue);
	void ExecuteTasks(int threadCount);
};