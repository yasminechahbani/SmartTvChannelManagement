#ifndef AVAILABILITYDELEGATE_H
#define AVAILABILITYDELEGATE_H
#include "equipement.h"
#include <QSqlQueryModel>
#include <QPainter>
#include <QTableView>


    class AvailabilityDelegate : public QStyledItemDelegate
    {
    public:
        explicit AvailabilityDelegate(QObject *parent = nullptr) : QStyledItemDelegate(parent) {}

        void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override
        {
            // Call base implementation for default painting
            QStyledItemDelegate::paint(painter, option, index);

            // Check if the column is the "AVAILABILITY" column (assuming it's column 3)
            if (index.column() == 3) {
                // Get the data for the "AVAILABILITY" column
                QString availability = index.data(Qt::DisplayRole).toString();

                // Check the value and set the background color accordingly
                if (availability == "AVAILABLE") {
                    painter->fillRect(option.rect, Qt::green); // Set green background for available items
                } else {
                    painter->fillRect(option.rect, Qt::gray); // Set gray background for other items
                }
            }
        }
    };


#endif // AVAILABILITYDELEGATE_H
