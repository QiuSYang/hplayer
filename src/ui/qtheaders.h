#ifndef QTHEADERS_H
#define QTHEADERS_H

// using glew.h not gl.h
#include "hgl.h"

#include "hpch.h"

#include <QtCore>
#include <QtGui>
#include <QtWidgets>

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#define DATE qPrintable (QDate::currentDate().toString("yyyy-MM-dd"))
#define TIME qPrintable (QTime::currentTime().toString("HH:mm:ss"))
#define DATETIME qPrintable (QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"))

#define TIMEMS qPrintable (QTime::currentTime().toString("HH:mm:ss zzz"))
#define DATETIMENBSP qPrintable (QDateTime::currentDateTime().toString("yyyy-MM-dd-HH-mm-ss"))
#define DATETIMEMSNBSP qPrintable (QDateTime::currentDateTime().toString("yyyy-MM-dd-HH-mm-ss-zzz"))

#define DESKTOP_WIDTH   qApp->desktop()->availableGeometry().width()
#define DESKTOP_HEIGHT  qApp->desktop()->availableGeometry().height()

#include "qtfunctions.h"
#include "qtrcloader.h"
//============================================================================
#endif // QTHEADERS_H