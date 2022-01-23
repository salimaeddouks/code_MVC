#ifndef DIALOGUE1_H
#define DIALOGUE1_H

#endif // DIALOGUE1_H
#include<QString>
#include<QtWidgets>

typedef struct S{
    QString Tag;
    QString Date;
    QString Description;

}S;
class dialogue1 : public QAbstractListModel {
private:
    QList<S>s;
public:
    dialogue1(QObject *parent={}): QAbstractListModel(parent){

    }
    ~dialogue1(){

    }
    int rowCount(const QModelIndex & parent) const{
        return s.count();
    }
    QVariant data(const QModelIndex & index, int role)const{
        if (role==Qt::DisplayRole){
            return s[index.row()].Description +"\t"+s[index.row()].Date+"\t"+ s[index.row()].Tag;
        }
        return QVariant();
    }

   void ok(S & e){
       beginInsertRows({},s.count(),s.count());
       s.append(e);
       endInsertRows();

    }
};
