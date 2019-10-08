#ifndef __LOKI_STAT_FETCHER_H__
#define __LOKI_STAT_FETCHER_H__

#include <unordered_map>
#include <functional>
#include <mutex>
 
#include <QObject>
#include <QTimer>

#include "HttpClient.hpp"
 
/**
 * The StatFetcher periodically requests stats from the Loki daemon.
 */
class StatFetcher : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(StatFetcher);

public:

    StatFetcher();
    ~StatFetcher();

private:

    QTimer* m_timer;
    HttpClient m_httpClient;
};
 
#endif // __LOKI_STAT_FETCHER_H__