
#ifndef CPUDETAILS_H
#define CPUDETAILS_H
#pragma once
#include <QString>
#include <QSysInfo>


class CpuDetails
{
public:

    //Get CPU persentage
    inline QString getCpu_per()
    {
        CPU_per = QSysInfo::prettyProductName();
        return CPU_per;
    }

    //Get CPU temperature
    inline double getCpu_temp()
    {
       

    }

    //Get memory details
    inline double getMemory()
    {

    }

private:
    QString CPU_per;
    double CPu_temp;
    double memory;


};


#endif // CPUDETAILS_H
