/*
Name: Jared Summers
Program: Vcard
Desc: Generates a VCard
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	string strFileName = "address.vcf";
	ofstream fileAddress;
	string strFirst = "Natalie";
	string strLast = "Salavar";
	string strHomePhone = "210-567-9023";
	string strWorkPhone = "1800-599-2909";
	string strTitle = "Manager";
	string strEmail = "email.vcf";

	cout << "Please enter a filename: ";
	cin >> strFileName;
	cout << "Please enter email adress: ";
	cin >> strEmail;

	fileAddress.open(strFileName);
	fileAddress << "BEGIN:VCARD" << endl;
	fileAddress << "VERSION:2.1" << endl;
	fileAddress << "N:" << strLast << ";" << strFirst << ";;" << endl;
	fileAddress << "FN:" << strFirst << " " << strLast << endl;
	fileAddress << "TITLE: " << strTitle << endl;
	fileAddress << "EMAIL: " << strEmail << endl;
	fileAddress << "HOME PHONE: " << strHomePhone << endl;
	fileAddress << "WORK PHONE: " << strWorkPhone << endl;
	fileAddress << "END:VCARD" << endl;
	fileAddress.close();
	cout << "Wrote " << strFileName << endl;
	return 0;
}

