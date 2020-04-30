#pragma once
#include <QEventLoop>
#include <QTimer>
#include <qsshclient.h>

#include "transporters/abstracttransporter.h"

class QxtSshTcpSocket;

namespace RedisClient {

/**
 * @brief The SshTransporter class
 * Provides execution of redis commands through SSH tunnel.
 */
class SshTransporter : public AbstractTransporter
{
public:
    SshTransporter(Connection *);

public slots:
    void disconnectFromHost();

protected:
    bool isInitialized() const override;
    bool isSocketReconnectRequired() const override;
    bool canReadFromSocket() override;
    QByteArray readFromSocket() override;
    void initSocket() override;
    bool connectToHost() override;
    void sendCommand(const QByteArray& cmd) override;    

protected slots:
    void reconnect() override;

private:
    bool openTcpSocket();

private slots:
    void OnSshConnectionError(QSshClient::Error);
    void OnSshSocketDestroyed();

private:
    QSshTcpSocket * m_socket; // owner of this object is sshClient
    QSharedPointer<QSshClient> m_sshClient;

    bool m_isHostKeyAlreadyAdded;
};
}