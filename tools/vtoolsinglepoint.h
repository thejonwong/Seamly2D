#ifndef VTOOLSINGLEPOINT_H
#define VTOOLSINGLEPOINT_H

#include "../container/vcontainer.h"
#include "../xml/vdomdocument.h"
#include "vtoolpoint.h"
#include "../dialogs/dialogsinglepoint.h"

class VToolSinglePoint : public VToolPoint
{
    Q_OBJECT
public:
                            VToolSinglePoint (VDomDocument *doc, VContainer *data, qint64 id,
                                              Tool::Enum typeCreation, QGraphicsItem * parent = 0 );
public slots:
    virtual void            FullUpdateFromFile();
    virtual void            FullUpdateFromGui(int result);
    virtual void            ChangedActivDraw(const QString newName);
signals:
    void                    FullUpdateTree();
protected:
    virtual void            contextMenuEvent ( QGraphicsSceneContextMenuEvent * event );
    virtual void            AddToFile();
    QVariant                itemChange ( GraphicsItemChange change, const QVariant &value );
private:
    QSharedPointer<DialogSinglePoint> dialogSinglePoint;
};

#endif // VTOOLSINGLEPOINT_H
