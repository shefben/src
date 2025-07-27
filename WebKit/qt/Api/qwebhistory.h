#ifndef QWEBHISTORY_H
#define QWEBHISTORY_H

#include <QDateTime>
#include <QIcon>
#include <QList>
#include <QString>
#include <QUrl>
#include <QVariant>
#include "qwebkitglobal.h"

class QWEBKIT_EXPORT QWebHistoryItem {
public:
    QWebHistoryItem() {}
    QWebHistoryItem(const QWebHistoryItem&) {}
    QWebHistoryItem& operator=(const QWebHistoryItem&) { return *this; }

    QUrl originalUrl() const { return QUrl(); }
    QUrl url() const { return QUrl(); }
    QString title() const { return QString(); }
    QDateTime lastVisited() const { return QDateTime(); }
    QIcon icon() const { return QIcon(); }
    QVariant userData() const { return QVariant(); }
    void setUserData(const QVariant&) {}
    bool isValid() const { return false; }
};

class QWEBKIT_EXPORT QWebHistory {
public:
    QWebHistory() {}
    void clear() {}

    QList<QWebHistoryItem> items() const { return QList<QWebHistoryItem>(); }
    QList<QWebHistoryItem> backItems(int) const { return QList<QWebHistoryItem>(); }
    QList<QWebHistoryItem> forwardItems(int) const { return QList<QWebHistoryItem>(); }

    bool canGoBack() const { return false; }
    bool canGoForward() const { return false; }

    void back() {}
    void forward() {}
    void goToItem(const QWebHistoryItem&) {}

    QWebHistoryItem backItem() const { return QWebHistoryItem(); }
    QWebHistoryItem currentItem() const { return QWebHistoryItem(); }
    QWebHistoryItem forwardItem() const { return QWebHistoryItem(); }
    QWebHistoryItem itemAt(int) const { return QWebHistoryItem(); }

    int currentItemIndex() const { return -1; }
    int count() const { return 0; }

    int maximumItemCount() const { return 0; }
    void setMaximumItemCount(int) {}
};

#endif
