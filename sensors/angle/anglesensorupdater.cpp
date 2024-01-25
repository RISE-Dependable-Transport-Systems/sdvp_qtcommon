/*
 *     Copyright 2022 RISE Sweden
 *     Published under GPLv3: https://www.gnu.org/licenses/gpl-3.0.html
 */
#include "anglesensorupdater.h"

AngleSensorUpdater::AngleSensorUpdater(QSharedPointer<VehicleState> vehicleState)
{
    mVehicleState = vehicleState;
}

QSharedPointer<VehicleState> AngleSensorUpdater::getVehicleState() const
{
    return mVehicleState;
}
