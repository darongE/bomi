#ifndef SUBTITLEVIEW_HPP
#define SUBTITLEVIEW_HPP

#include "stdafx.hpp"
#include "dialogs.hpp"

class PlayEngine;		class Subtitle;
class SubtitleComponentModel;

class SubtitleView : public QDialog {
	Q_OBJECT
public:
	SubtitleView(QWidget *parent = 0);
	~SubtitleView();
public slots:
	void setModels(const QVector<SubtitleComponentModel*> &model);
private slots:
	void setTimeVisible(bool visible);
	void setAutoScrollEnabled(bool enabled);
private:
	void showEvent(QShowEvent *event);
	void updateModels();
	class CompView;
	struct Data;
	Data *d;
};

#endif // SUBTITLEVIEW_HPP
