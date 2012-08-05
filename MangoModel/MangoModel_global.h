#ifndef MANGOMODEL_GLOBAL_H
#define MANGOMODEL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MANGOMODEL_LIBRARY)
#  define MANGOMODELSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MANGOMODELSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MANGOMODEL_GLOBAL_H