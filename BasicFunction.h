#pragma once
#include <stdio.h>
#include <string.h>
#include <Windows.h>

void GetFormatTime(SYSTEMTIME Time, char* TimeString) {
	sprintf(TimeString, "%04d/%02d/%02d %02d:%02d:%02d.%03d",
		Time.wYear, Time.wMonth, Time.wDay, Time.wHour,
		Time.wMinute, Time.wSecond, Time.wMilliseconds
	);
}

void WriteLog(FILE* LogWriter, SYSTEMTIME StartTime, SYSTEMTIME EndTime, char* ErrorType, char* Text, char* Title, int UserChoose) {
	char StartTimeString[SIZE], EndTimeString[SIZE];
	GetFormatTime(StartTime, StartTimeString);
	GetFormatTime(EndTime, EndTimeString);

	fprintf(LogWriter, "���ε����Ĵ�������Ϊ %s��\n", ErrorType);
	fprintf(LogWriter, "���ڿ�ʼ׼�������� %s��\n", StartTimeString);
	fprintf(LogWriter, "���ڱ��ر��� %s��\n", EndTimeString);
	fprintf(LogWriter, "������ʾ����ϢΪ��\n%s\n", Text);
	fprintf(LogWriter, "������ʾ�ı���Ϊ��%s\n", Title);
	fprintf(LogWriter, "�û����µİ�ťΪ��%s��\n", ButtonPressType[UserChoose]);
	fprintf(LogWriter, "\n------\n\n");
}