// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include <QByteArray>
#include <QDateTime>
#include <QUuid>
#include <QBitArray>
#include "QDateTime.pypp.hpp"

namespace bp = boost::python;

QDateTime __copy__(const QDateTime &other){ return QDateTime(other); }

#include "Qt/qdatastream.hpp"

void register_QDateTime_class(){

    { //::QDateTime
        typedef bp::class_< QDateTime > QDateTime_exposer_t;
        QDateTime_exposer_t QDateTime_exposer = QDateTime_exposer_t( "QDateTime", bp::init< >() );
        bp::scope QDateTime_scope( QDateTime_exposer );
        QDateTime_exposer.def( bp::init< QDate const & >(( bp::arg("arg0") )) );
        QDateTime_exposer.def( bp::init< QDate const &, QTime const &, bp::optional< Qt::TimeSpec > >(( bp::arg("arg0"), bp::arg("arg1"), bp::arg("spec")=::Qt::LocalTime )) );
        QDateTime_exposer.def( bp::init< QDateTime const & >(( bp::arg("other") )) );
        { //::QDateTime::addDays

            typedef ::QDateTime ( ::QDateTime::*addDays_function_type )( ::qint64 ) const;
            addDays_function_type addDays_function_value( &::QDateTime::addDays );

            QDateTime_exposer.def(
                "addDays"
                , addDays_function_value
                , ( bp::arg("days") ) );

        }
        { //::QDateTime::addMSecs

            typedef ::QDateTime ( ::QDateTime::*addMSecs_function_type )( ::qint64 ) const;
            addMSecs_function_type addMSecs_function_value( &::QDateTime::addMSecs );

            QDateTime_exposer.def(
                "addMSecs"
                , addMSecs_function_value
                , ( bp::arg("msecs") ) );

        }
        { //::QDateTime::addMonths

            typedef ::QDateTime ( ::QDateTime::*addMonths_function_type )( int ) const;
            addMonths_function_type addMonths_function_value( &::QDateTime::addMonths );

            QDateTime_exposer.def(
                "addMonths"
                , addMonths_function_value
                , ( bp::arg("months") ) );

        }
        { //::QDateTime::addSecs

            typedef ::QDateTime ( ::QDateTime::*addSecs_function_type )( ::qint64 ) const;
            addSecs_function_type addSecs_function_value( &::QDateTime::addSecs );

            QDateTime_exposer.def(
                "addSecs"
                , addSecs_function_value
                , ( bp::arg("secs") ) );

        }
        { //::QDateTime::addYears

            typedef ::QDateTime ( ::QDateTime::*addYears_function_type )( int ) const;
            addYears_function_type addYears_function_value( &::QDateTime::addYears );

            QDateTime_exposer.def(
                "addYears"
                , addYears_function_value
                , ( bp::arg("years") ) );

        }
        { //::QDateTime::currentDateTime

            typedef ::QDateTime ( *currentDateTime_function_type )(  );
            currentDateTime_function_type currentDateTime_function_value( &::QDateTime::currentDateTime );

            QDateTime_exposer.def(
                "currentDateTime"
                , currentDateTime_function_value );

        }
        { //::QDateTime::currentDateTimeUtc

            typedef ::QDateTime ( *currentDateTimeUtc_function_type )(  );
            currentDateTimeUtc_function_type currentDateTimeUtc_function_value( &::QDateTime::currentDateTimeUtc );

            QDateTime_exposer.def(
                "currentDateTimeUtc"
                , currentDateTimeUtc_function_value );

        }
        { //::QDateTime::currentMSecsSinceEpoch

            typedef ::qint64 ( *currentMSecsSinceEpoch_function_type )(  );
            currentMSecsSinceEpoch_function_type currentMSecsSinceEpoch_function_value( &::QDateTime::currentMSecsSinceEpoch );

            QDateTime_exposer.def(
                "currentMSecsSinceEpoch"
                , currentMSecsSinceEpoch_function_value );

        }
        { //::QDateTime::date

            typedef ::QDate ( ::QDateTime::*date_function_type )(  ) const;
            date_function_type date_function_value( &::QDateTime::date );

            QDateTime_exposer.def(
                "date"
                , date_function_value );

        }
        { //::QDateTime::daysTo

            typedef ::qint64 ( ::QDateTime::*daysTo_function_type )( ::QDateTime const & ) const;
            daysTo_function_type daysTo_function_value( &::QDateTime::daysTo );

            QDateTime_exposer.def(
                "daysTo"
                , daysTo_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::QDateTime::fromMSecsSinceEpoch

            typedef ::QDateTime ( *fromMSecsSinceEpoch_function_type )( ::qint64 );
            fromMSecsSinceEpoch_function_type fromMSecsSinceEpoch_function_value( &::QDateTime::fromMSecsSinceEpoch );

            QDateTime_exposer.def(
                "fromMSecsSinceEpoch"
                , fromMSecsSinceEpoch_function_value
                , ( bp::arg("msecs") ) );

        }
   /*     { //::QDateTime::fromString

            typedef ::QDateTime ( *fromString_function_type )( ::QString const &,::Qt::DateFormat );
            fromString_function_type fromString_function_value( &::QDateTime::fromString );

            QDateTime_exposer.def(
                "fromString"
                , fromString_function_value
                , ( bp::arg("s"), bp::arg("f")=::Qt::TextDate ) );

        } */
        { //::QDateTime::fromString

            typedef ::QDateTime ( *fromString_function_type )( ::QString const &,::QString const & );
            fromString_function_type fromString_function_value( &::QDateTime::fromString );

            QDateTime_exposer.def(
                "fromString"
                , fromString_function_value
                , ( bp::arg("s"), bp::arg("format") ) );

        }
        { //::QDateTime::fromTime_t

            typedef ::QDateTime ( *fromTime_t_function_type )( ::uint );
            fromTime_t_function_type fromTime_t_function_value( &::QDateTime::fromTime_t );

            QDateTime_exposer.def(
                "fromTime_t"
                , fromTime_t_function_value
                , ( bp::arg("secsSince1Jan1970UTC") ) );

        }
        { //::QDateTime::isNull

            typedef bool ( ::QDateTime::*isNull_function_type )(  ) const;
            isNull_function_type isNull_function_value( &::QDateTime::isNull );

            QDateTime_exposer.def(
                "isNull"
                , isNull_function_value );

        }
        { //::QDateTime::isValid

            typedef bool ( ::QDateTime::*isValid_function_type )(  ) const;
            isValid_function_type isValid_function_value( &::QDateTime::isValid );

            QDateTime_exposer.def(
                "isValid"
                , isValid_function_value );

        }
        { //::QDateTime::msecsTo

            typedef ::qint64 ( ::QDateTime::*msecsTo_function_type )( ::QDateTime const & ) const;
            msecsTo_function_type msecsTo_function_value( &::QDateTime::msecsTo );

            QDateTime_exposer.def(
                "msecsTo"
                , msecsTo_function_value
                , ( bp::arg("arg0") ) );

        }
        QDateTime_exposer.def( bp::self != bp::self );
        QDateTime_exposer.def( bp::self < bp::self );
        QDateTime_exposer.def( bp::self <= bp::self );
        { //::QDateTime::operator=

            typedef ::QDateTime & ( ::QDateTime::*assign_function_type )( ::QDateTime const & ) ;
            assign_function_type assign_function_value( &::QDateTime::operator= );

            QDateTime_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );

        }
        QDateTime_exposer.def( bp::self == bp::self );
        QDateTime_exposer.def( bp::self > bp::self );
        QDateTime_exposer.def( bp::self >= bp::self );
        { //::QDateTime::secsTo

            typedef ::qint64 ( ::QDateTime::*secsTo_function_type )( ::QDateTime const & ) const;
            secsTo_function_type secsTo_function_value( &::QDateTime::secsTo );

            QDateTime_exposer.def(
                "secsTo"
                , secsTo_function_value
                , ( bp::arg("arg0") ) );

        }
        { //::QDateTime::setDate

            typedef void ( ::QDateTime::*setDate_function_type )( ::QDate const & ) ;
            setDate_function_type setDate_function_value( &::QDateTime::setDate );

            QDateTime_exposer.def(
                "setDate"
                , setDate_function_value
                , ( bp::arg("date") ) );

        }
        { //::QDateTime::setMSecsSinceEpoch

            typedef void ( ::QDateTime::*setMSecsSinceEpoch_function_type )( ::qint64 ) ;
            setMSecsSinceEpoch_function_type setMSecsSinceEpoch_function_value( &::QDateTime::setMSecsSinceEpoch );

            QDateTime_exposer.def(
                "setMSecsSinceEpoch"
                , setMSecsSinceEpoch_function_value
                , ( bp::arg("msecs") ) );

        }
        { //::QDateTime::setTime

            typedef void ( ::QDateTime::*setTime_function_type )( ::QTime const & ) ;
            setTime_function_type setTime_function_value( &::QDateTime::setTime );

            QDateTime_exposer.def(
                "setTime"
                , setTime_function_value
                , ( bp::arg("time") ) );

        }
        { //::QDateTime::setTimeSpec

            typedef void ( ::QDateTime::*setTimeSpec_function_type )( ::Qt::TimeSpec ) ;
            setTimeSpec_function_type setTimeSpec_function_value( &::QDateTime::setTimeSpec );

            QDateTime_exposer.def(
                "setTimeSpec"
                , setTimeSpec_function_value
                , ( bp::arg("spec") ) );

        }
        { //::QDateTime::setTime_t

            typedef void ( ::QDateTime::*setTime_t_function_type )( ::uint ) ;
            setTime_t_function_type setTime_t_function_value( &::QDateTime::setTime_t );

            QDateTime_exposer.def(
                "setTime_t"
                , setTime_t_function_value
                , ( bp::arg("secsSince1Jan1970UTC") ) );

        }
        { //::QDateTime::setUtcOffset

            typedef void ( ::QDateTime::*setUtcOffset_function_type )( int ) ;
            setUtcOffset_function_type setUtcOffset_function_value( &::QDateTime::setUtcOffset );

            QDateTime_exposer.def(
                "setUtcOffset"
                , setUtcOffset_function_value
                , ( bp::arg("seconds") ) );

        }
        { //::QDateTime::swap

            typedef void ( ::QDateTime::*swap_function_type )( ::QDateTime & ) ;
            swap_function_type swap_function_value( &::QDateTime::swap );

            QDateTime_exposer.def(
                "swap"
                , swap_function_value
                , ( bp::arg("other") ) );

        }
        { //::QDateTime::time

            typedef ::QTime ( ::QDateTime::*time_function_type )(  ) const;
            time_function_type time_function_value( &::QDateTime::time );

            QDateTime_exposer.def(
                "time"
                , time_function_value );

        }
        { //::QDateTime::timeSpec

            typedef ::Qt::TimeSpec ( ::QDateTime::*timeSpec_function_type )(  ) const;
            timeSpec_function_type timeSpec_function_value( &::QDateTime::timeSpec );

            QDateTime_exposer.def(
                "timeSpec"
                , timeSpec_function_value );

        }
        { //::QDateTime::toLocalTime

            typedef ::QDateTime ( ::QDateTime::*toLocalTime_function_type )(  ) const;
            toLocalTime_function_type toLocalTime_function_value( &::QDateTime::toLocalTime );

            QDateTime_exposer.def(
                "toLocalTime"
                , toLocalTime_function_value );

        }
        { //::QDateTime::toMSecsSinceEpoch

            typedef ::qint64 ( ::QDateTime::*toMSecsSinceEpoch_function_type )(  ) const;
            toMSecsSinceEpoch_function_type toMSecsSinceEpoch_function_value( &::QDateTime::toMSecsSinceEpoch );

            QDateTime_exposer.def(
                "toMSecsSinceEpoch"
                , toMSecsSinceEpoch_function_value );

        }
 /*       { //::QDateTime::toString

            typedef ::QString ( ::QDateTime::*toString_function_type )( ::Qt::DateFormat ) const;
            toString_function_type toString_function_value( &::QDateTime::toString );

            QDateTime_exposer.def(
                "toString"
                , toString_function_value
                , ( bp::arg("f")=::Qt::TextDate ) );

        }  */
        { //::QDateTime::toString

            typedef ::QString ( ::QDateTime::*toString_function_type )( ::QString const & ) const;
            toString_function_type toString_function_value( &::QDateTime::toString );

            QDateTime_exposer.def(
                "toString"
                , toString_function_value
                , ( bp::arg("format") ) );

        }
        { //::QDateTime::toTimeSpec

            typedef ::QDateTime ( ::QDateTime::*toTimeSpec_function_type )( ::Qt::TimeSpec ) const;
            toTimeSpec_function_type toTimeSpec_function_value( &::QDateTime::toTimeSpec );

            QDateTime_exposer.def(
                "toTimeSpec"
                , toTimeSpec_function_value
                , ( bp::arg("spec") ) );

        }
        { //::QDateTime::toTime_t

            typedef ::uint ( ::QDateTime::*toTime_t_function_type )(  ) const;
            toTime_t_function_type toTime_t_function_value( &::QDateTime::toTime_t );

            QDateTime_exposer.def(
                "toTime_t"
                , toTime_t_function_value );

        }
        { //::QDateTime::toUTC

            typedef ::QDateTime ( ::QDateTime::*toUTC_function_type )(  ) const;
            toUTC_function_type toUTC_function_value( &::QDateTime::toUTC );

            QDateTime_exposer.def(
                "toUTC"
                , toUTC_function_value );

        }
        { //::QDateTime::utcOffset

            typedef int ( ::QDateTime::*utcOffset_function_type )(  ) const;
            utcOffset_function_type utcOffset_function_value( &::QDateTime::utcOffset );

            QDateTime_exposer.def(
                "utcOffset"
                , utcOffset_function_value );

        }
        QDateTime_exposer.staticmethod( "currentDateTime" );
        QDateTime_exposer.staticmethod( "currentDateTimeUtc" );
        QDateTime_exposer.staticmethod( "currentMSecsSinceEpoch" );
        QDateTime_exposer.staticmethod( "fromMSecsSinceEpoch" );
        QDateTime_exposer.staticmethod( "fromString" );
        QDateTime_exposer.staticmethod( "fromTime_t" );
        QDateTime_exposer.def( "__copy__", &__copy__);
        QDateTime_exposer.def( "__deepcopy__", &__copy__);
        QDateTime_exposer.def( "clone", &__copy__);
        QDateTime_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::QDateTime >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        QDateTime_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::QDateTime >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
    }

}
