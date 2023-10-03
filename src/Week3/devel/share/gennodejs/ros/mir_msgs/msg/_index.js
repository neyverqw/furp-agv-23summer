
"use strict";

let Proximity = require('./Proximity.js');
let UserPrompt = require('./UserPrompt.js');
let TimeDebug = require('./TimeDebug.js');
let MissionCtrlCommand = require('./MissionCtrlCommand.js');
let EncoderTestEntry = require('./EncoderTestEntry.js');
let ServiceResponseHeader = require('./ServiceResponseHeader.js');
let HookStatus = require('./HookStatus.js');
let ExternalRobot = require('./ExternalRobot.js');
let SoundEvent = require('./SoundEvent.js');
let Twist2D = require('./Twist2D.js');
let HookExtendedStatus = require('./HookExtendedStatus.js');
let SkidDetectionDiff = require('./SkidDetectionDiff.js');
let SafetyStatus = require('./SafetyStatus.js');
let ChargingState = require('./ChargingState.js');
let WorldMap = require('./WorldMap.js');
let Gpio = require('./Gpio.js');
let RobotState = require('./RobotState.js');
let Error = require('./Error.js');
let MovingState = require('./MovingState.js');
let MissionCtrlState = require('./MissionCtrlState.js');
let BMSData = require('./BMSData.js');
let ExternalRobots = require('./ExternalRobots.js');
let ResourceState = require('./ResourceState.js');
let Encoders = require('./Encoders.js');
let RobotStatus = require('./RobotStatus.js');
let HeightState = require('./HeightState.js');
let WebPath = require('./WebPath.js');
let SkidDetectionStampedFloat = require('./SkidDetectionStampedFloat.js');
let Trolley = require('./Trolley.js');
let AngleMeasurment = require('./AngleMeasurment.js');
let PalletLifterStatus = require('./PalletLifterStatus.js');
let PrecisionDockingStatus = require('./PrecisionDockingStatus.js');
let Event = require('./Event.js');
let BrakeState = require('./BrakeState.js');
let Device = require('./Device.js');
let ResourcesState = require('./ResourcesState.js');
let Events = require('./Events.js');
let StampedEncoders = require('./StampedEncoders.js');
let HookData = require('./HookData.js');
let Serial = require('./Serial.js');
let Pose2D = require('./Pose2D.js');
let Path = require('./Path.js');
let PowerBoardMotorStatus = require('./PowerBoardMotorStatus.js');
let GripperState = require('./GripperState.js');
let Pendant = require('./Pendant.js');
let PlanSegments = require('./PlanSegments.js');
let IOs = require('./IOs.js');
let MirExtra = require('./MirExtra.js');
let Devices = require('./Devices.js');
let RobotMode = require('./RobotMode.js');
let WorldModel = require('./WorldModel.js');
let ResourcesAcquisition = require('./ResourcesAcquisition.js');
let LocalMapStat = require('./LocalMapStat.js');
let BatteryCurrents = require('./BatteryCurrents.js');
let MirLocalPlannerPathTypes = require('./MirLocalPlannerPathTypes.js');
let JoystickVel = require('./JoystickVel.js');
let PlanSegment = require('./PlanSegment.js');

module.exports = {
  Proximity: Proximity,
  UserPrompt: UserPrompt,
  TimeDebug: TimeDebug,
  MissionCtrlCommand: MissionCtrlCommand,
  EncoderTestEntry: EncoderTestEntry,
  ServiceResponseHeader: ServiceResponseHeader,
  HookStatus: HookStatus,
  ExternalRobot: ExternalRobot,
  SoundEvent: SoundEvent,
  Twist2D: Twist2D,
  HookExtendedStatus: HookExtendedStatus,
  SkidDetectionDiff: SkidDetectionDiff,
  SafetyStatus: SafetyStatus,
  ChargingState: ChargingState,
  WorldMap: WorldMap,
  Gpio: Gpio,
  RobotState: RobotState,
  Error: Error,
  MovingState: MovingState,
  MissionCtrlState: MissionCtrlState,
  BMSData: BMSData,
  ExternalRobots: ExternalRobots,
  ResourceState: ResourceState,
  Encoders: Encoders,
  RobotStatus: RobotStatus,
  HeightState: HeightState,
  WebPath: WebPath,
  SkidDetectionStampedFloat: SkidDetectionStampedFloat,
  Trolley: Trolley,
  AngleMeasurment: AngleMeasurment,
  PalletLifterStatus: PalletLifterStatus,
  PrecisionDockingStatus: PrecisionDockingStatus,
  Event: Event,
  BrakeState: BrakeState,
  Device: Device,
  ResourcesState: ResourcesState,
  Events: Events,
  StampedEncoders: StampedEncoders,
  HookData: HookData,
  Serial: Serial,
  Pose2D: Pose2D,
  Path: Path,
  PowerBoardMotorStatus: PowerBoardMotorStatus,
  GripperState: GripperState,
  Pendant: Pendant,
  PlanSegments: PlanSegments,
  IOs: IOs,
  MirExtra: MirExtra,
  Devices: Devices,
  RobotMode: RobotMode,
  WorldModel: WorldModel,
  ResourcesAcquisition: ResourcesAcquisition,
  LocalMapStat: LocalMapStat,
  BatteryCurrents: BatteryCurrents,
  MirLocalPlannerPathTypes: MirLocalPlannerPathTypes,
  JoystickVel: JoystickVel,
  PlanSegment: PlanSegment,
};
