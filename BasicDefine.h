#pragma once
#include <Windows.h>
#include <string.h>

#define SIZE 255

#define CONFIG_FILENAME "Config.ini"
#define LOG_FILENAME "ErrorReportLog.log"

#define MEMORY_ERROR 1
#define DLL_MISSING_ERROR 2
#define EXE_ERROR 3 

#define DEFAULT_ERROR MEMORY_ERROR

char ButtonPressType[SIZE][SIZE];
char IconType[SIZE][SIZE];
char ButtonType[SIZE][SIZE];
char TextList[SIZE][SIZE];
char TitleList[SIZE][SIZE];

void initButtonPressTypeString() {
	strcpy(ButtonPressType[IDOK], "ȷ��");
	strcpy(ButtonPressType[IDCANCEL], "ȡ��");
	strcpy(ButtonPressType[IDABORT], "��ֹ");
	strcpy(ButtonPressType[IDRETRY], "����");
	strcpy(ButtonPressType[IDIGNORE], "����");
	strcpy(ButtonPressType[IDYES], "��");
	strcpy(ButtonPressType[IDNO], "��");
	strcpy(ButtonPressType[IDTRYAGAIN], "����");
	strcpy(ButtonPressType[IDCONTINUE], "����");
}

void initTextString() {
	strcpy(TextList[MEMORY_ERROR], "\"%s\" ָ�����õ� \"%s\" �ڴ档���ڴ治��Ϊ \"%s\"��\n\nҪ��ֹ�����뵥����ȷ������\nҪ���Գ����뵥����ȡ������");
	strcpy(TextList[DLL_MISSING_ERROR], "�޷������˳�����Ϊ������ж�ʧ %s���������°�װ�ó����Խ�������⡣");
	strcpy(TextList[EXE_ERROR], "Ӧ�ó������쳣 %s (%s)��λ��Ϊ %s��\n\nҪ��ֹ�����뵥����ȷ������\nҪ���Գ����뵥����ȡ������");
}

void initTitleString() {
	strcpy(TitleList[MEMORY_ERROR], "%s - Ӧ�ó������");
	strcpy(TitleList[DLL_MISSING_ERROR], "%s - ϵͳ����");
	strcpy(TitleList[EXE_ERROR], "%s - Ӧ�ó������");
}

void initStrings() {
	initButtonPressTypeString();
	initTextString();
	initTitleString();
}