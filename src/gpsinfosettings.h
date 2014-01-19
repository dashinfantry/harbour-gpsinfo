#ifndef GPSINFOSETTINGS_H
#define GPSINFOSETTINGS_H

#include "qmlsettingswrapper.h"

class GPSInfoSettings : public QMLSettingsWrapper
{
    Q_OBJECT
    Q_PROPERTY(QString coordinateFormat READ getCoordinateFormat WRITE setCoordinateFormat NOTIFY coordinateFormatChanged)
    Q_PROPERTY(bool showAltitudeApp READ getShowAltitudeApp WRITE setShowAltitudeApp NOTIFY showAltitudeAppChanged)
    Q_PROPERTY(bool showAltitudeCover READ getShowAltitudeCover WRITE setShowAltitudeCover NOTIFY showAltitudeCoverChanged)
    Q_PROPERTY(bool showCompassDirectionApp READ getShowCompassDirectionApp WRITE setShowCompassDirectionApp NOTIFY showCompassDirectionAppChanged)
    Q_PROPERTY(bool showCompassDirectionCover READ getShowCompassDirectionCover WRITE setShowCompassDirectionCover NOTIFY showCompassDirectionCoverChanged)
    Q_PROPERTY(bool showGpsStateApp READ getShowGpsStateApp WRITE setShowGpsStateApp NOTIFY showGpsStateAppChanged)
    Q_PROPERTY(bool showGpsStateCover READ getShowGpsStateCover WRITE setShowGpsStateCover NOTIFY showGpsStateCoverChanged)
    Q_PROPERTY(bool showHorizontalAccuracyApp READ getShowHorizontalAccuracyApp WRITE setShowHorizontalAccuracyApp NOTIFY showHorizontalAccuracyAppChanged)
    Q_PROPERTY(bool showHorizontalAccuracyCover READ getShowHorizontalAccuracyCover WRITE setShowHorizontalAccuracyCover NOTIFY showHorizontalAccuracyCoverChanged)
    Q_PROPERTY(bool showLastUpdateApp READ getShowLastUpdateApp WRITE setShowLastUpdateApp NOTIFY showLastUpdateAppChanged)
    Q_PROPERTY(bool showLastUpdateCover READ getShowLastUpdateCover WRITE setShowLastUpdateCover NOTIFY showLastUpdateCoverChanged)
    Q_PROPERTY(bool showLatitudeApp READ getShowLatitudeApp WRITE setShowLatitudeApp NOTIFY showLatitudeAppChanged)
    Q_PROPERTY(bool showLatitudeCover READ getShowLatitudeCover WRITE setShowLatitudeCover NOTIFY showLatitudeCoverChanged)
    Q_PROPERTY(bool showLongitudeApp READ getShowLongitudeApp WRITE setShowLongitudeApp NOTIFY showLongitudeAppChanged)
    Q_PROPERTY(bool showLongitudeCover READ getShowLongitudeCover WRITE setShowLongitudeCover NOTIFY showLongitudeCoverChanged)
    Q_PROPERTY(bool showSpeedApp READ getShowSpeedApp WRITE setShowSpeedApp NOTIFY showSpeedAppChanged)
    Q_PROPERTY(bool showSpeedCover READ getShowSpeedCover WRITE setShowSpeedCover NOTIFY showSpeedCoverChanged)
    Q_PROPERTY(bool showVerticalAccuracyApp READ getShowVerticalAccuracyApp WRITE setShowVerticalAccuracyApp NOTIFY showVerticalAccuracyAppChanged)
    Q_PROPERTY(bool showVerticalAccuracyCover READ getShowVerticalAccuracyCover WRITE setShowVerticalAccuracyCover NOTIFY showVerticalAccuracyCoverChanged)
    Q_PROPERTY(QString units READ getUnits WRITE setUnits NOTIFY unitsChanged)
public:
    explicit GPSInfoSettings(QObject *parent = 0);

    QString getCoordinateFormat() {return this->value("coordinateFormat", "DEG").toString();}
    bool getShowAltitudeApp() {return this->value("showAltitudeApp", true).toBool();}
    bool getShowAltitudeCover() {return this->value("showAltitudeCover", false).toBool();}
    bool getShowCompassDirectionApp() {return this->value("showCompassDirectionApp", true).toBool();}
    bool getShowCompassDirectionCover() {return this->value("showCompassDirectionCover", false).toBool();}
    bool getShowGpsStateApp() {return this->value("showGpsStateApp", true).toBool();}
    bool getShowGpsStateCover() {return this->value("showGpsStateCover", true).toBool();}
    bool getShowHorizontalAccuracyApp() {return this->value("showHorizontalAccuracyApp", true).toBool();}
    bool getShowHorizontalAccuracyCover() {return this->value("showHorizontalAccuracyCover", false).toBool();}
    bool getShowLastUpdateApp() {return this->value("showLastUpdateApp", true).toBool();}
    bool getShowLastUpdateCover() {return this->value("showLastUpdateCover", false).toBool();}
    bool getShowLatitudeApp() {return this->value("showLatitudeApp", true).toBool();}
    bool getShowLatitudeCover() {return this->value("showLatitudeCover", true).toBool();}
    bool getShowLongitudeApp() {return this->value("showLongitudeApp", true).toBool();}
    bool getShowLongitudeCover() {return this->value("showLongitudeCover", true).toBool();}
    bool getShowSpeedApp() {return this->value("showSpeedApp", true).toBool();}
    bool getShowSpeedCover() {return this->value("showSpeedCover", false).toBool();}
    bool getShowVerticalAccuracyApp() {return this->value("showVerticalAccuracyApp", true).toBool();}
    bool getShowVerticalAccuracyCover() {return this->value("showVerticalAccuracyCover", false).toBool();}
    QString getUnits() {return this->value("units", "MET").toString();}

    void setCoordinateFormat(QString val) {this->setValue("coordinateFormat", val); emit coordinateFormatChanged(val);}
    void setShowAltitudeApp(bool val) {this->setValue("showAltitudeApp", val); emit showAltitudeAppChanged(val);}
    void setShowAltitudeCover(bool val) {this->setValue("showAltitudeCover", val); emit showAltitudeCoverChanged(val);}
    void setShowCompassDirectionApp(bool val) {this->setValue("showCompassDirectionApp", val); emit showCompassDirectionAppChanged(val);}
    void setShowCompassDirectionCover(bool val) {this->setValue("showCompassDirectionCover", val); emit showCompassDirectionCoverChanged(val);}
    void setShowGpsStateApp(bool val) {this->setValue("showGpsStateApp", val); emit showGpsStateAppChanged(val);}
    void setShowGpsStateCover(bool val) {this->setValue("showGpsStateCover", val); emit showGpsStateCoverChanged(val);}
    void setShowHorizontalAccuracyApp(bool val) {this->setValue("showHorizontalAccuracyApp", val); emit showHorizontalAccuracyAppChanged(val);}
    void setShowHorizontalAccuracyCover(bool val) {this->setValue("showHorizontalAccuracyCover", val); emit showHorizontalAccuracyCoverChanged(val);}
    void setShowLastUpdateApp(bool val) {this->setValue("showLastUpdateApp", val); emit showLastUpdateAppChanged(val);}
    void setShowLastUpdateCover(bool val) {this->setValue("showLastUpdateCover", val); emit showLastUpdateCoverChanged(val);}
    void setShowLatitudeApp(bool val) {this->setValue("showLatitudeApp", val); emit showLatitudeAppChanged(val);}
    void setShowLatitudeCover(bool val) {this->setValue("showLatitudeCover", val); emit showLatitudeCoverChanged(val);}
    void setShowLongitudeApp(bool val) {this->setValue("showLongitudeApp", val); emit showLongitudeAppChanged(val);}
    void setShowLongitudeCover(bool val) {this->setValue("showLongitudeCover", val); emit showLongitudeCoverChanged(val);}
    void setShowSpeedApp(bool val) {this->setValue("showSpeedApp", val); emit showSpeedAppChanged(val);}
    void setShowSpeedCover(bool val) {this->setValue("showSpeedCover", val); emit showSpeedCoverChanged(val);}
    void setShowVerticalAccuracyApp(bool val) {this->setValue("showVerticalAccuracyApp", val); emit showVerticalAccuracyAppChanged(val);}
    void setShowVerticalAccuracyCover(bool val) {this->setValue("showVerticalAccuracyCover", val); emit showVerticalAccuracyCoverChanged(val);}
    void setUnits(QString val) {this->setValue("units", val); emit unitsChanged(val);}
private:

signals:
    void coordinateFormatChanged(QString);
    void showAltitudeAppChanged(bool);
    void showAltitudeCoverChanged(bool);
    void showCompassDirectionAppChanged(bool);
    void showCompassDirectionCoverChanged(bool);
    void showGpsStateAppChanged(bool);
    void showGpsStateCoverChanged(bool);
    void showHorizontalAccuracyAppChanged(bool);
    void showHorizontalAccuracyCoverChanged(bool);
    void showLastUpdateAppChanged(bool);
    void showLastUpdateCoverChanged(bool);
    void showLatitudeAppChanged(bool);
    void showLatitudeCoverChanged(bool);
    void showLongitudeAppChanged(bool);
    void showLongitudeCoverChanged(bool);
    void showSpeedAppChanged(bool);
    void showSpeedCoverChanged(bool);
    void showVerticalAccuracyAppChanged(bool);
    void showVerticalAccuracyCoverChanged(bool);
    void unitsChanged(QString);
public slots:

};

#endif // GPSINFOSETTINGS_H