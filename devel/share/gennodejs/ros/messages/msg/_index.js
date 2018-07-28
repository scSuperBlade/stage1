
"use strict";

let EnemyDirectionActionGoal = require('./EnemyDirectionActionGoal.js');
let exampleAction = require('./exampleAction.js');
let exampleActionGoal = require('./exampleActionGoal.js');
let EnemyDirectionAction = require('./EnemyDirectionAction.js');
let GlobalPlannerActionGoal = require('./GlobalPlannerActionGoal.js');
let EnemyDirectionGoal = require('./EnemyDirectionGoal.js');
let EnemyDirectionFeedback = require('./EnemyDirectionFeedback.js');
let exampleGoal = require('./exampleGoal.js');
let LocalizationActionFeedback = require('./LocalizationActionFeedback.js');
let BotGoalActionGoal = require('./BotGoalActionGoal.js');
let LocalPlannerAction = require('./LocalPlannerAction.js');
let LocalizationActionResult = require('./LocalizationActionResult.js');
let LocalizationActionGoal = require('./LocalizationActionGoal.js');
let BotGoalGoal = require('./BotGoalGoal.js');
let BotGoalAction = require('./BotGoalAction.js');
let LocalPlannerFeedback = require('./LocalPlannerFeedback.js');
let EnemyDirectionActionResult = require('./EnemyDirectionActionResult.js');
let GlobalPlannerActionResult = require('./GlobalPlannerActionResult.js');
let ArmorDetectionActionGoal = require('./ArmorDetectionActionGoal.js');
let BotGoalResult = require('./BotGoalResult.js');
let LocalPlannerActionFeedback = require('./LocalPlannerActionFeedback.js');
let exampleFeedback = require('./exampleFeedback.js');
let LocalPlannerResult = require('./LocalPlannerResult.js');
let ArmorDetectionActionFeedback = require('./ArmorDetectionActionFeedback.js');
let LocalizationResult = require('./LocalizationResult.js');
let GlobalPlannerResult = require('./GlobalPlannerResult.js');
let BotGoalActionResult = require('./BotGoalActionResult.js');
let LocalPlannerActionGoal = require('./LocalPlannerActionGoal.js');
let LocalPlannerActionResult = require('./LocalPlannerActionResult.js');
let exampleActionResult = require('./exampleActionResult.js');
let GlobalPlannerFeedback = require('./GlobalPlannerFeedback.js');
let exampleActionFeedback = require('./exampleActionFeedback.js');
let LocalPlannerGoal = require('./LocalPlannerGoal.js');
let ArmorDetectionResult = require('./ArmorDetectionResult.js');
let LocalizationAction = require('./LocalizationAction.js');
let GlobalPlannerActionFeedback = require('./GlobalPlannerActionFeedback.js');
let BotGoalFeedback = require('./BotGoalFeedback.js');
let GlobalPlannerAction = require('./GlobalPlannerAction.js');
let LocalizationGoal = require('./LocalizationGoal.js');
let ArmorDetectionFeedback = require('./ArmorDetectionFeedback.js');
let BotGoalActionFeedback = require('./BotGoalActionFeedback.js');
let ArmorDetectionActionResult = require('./ArmorDetectionActionResult.js');
let EnemyDirectionActionFeedback = require('./EnemyDirectionActionFeedback.js');
let ArmorDetectionAction = require('./ArmorDetectionAction.js');
let ArmorDetectionGoal = require('./ArmorDetectionGoal.js');
let GlobalPlannerGoal = require('./GlobalPlannerGoal.js');
let LocalizationFeedback = require('./LocalizationFeedback.js');
let EnemyDirectionResult = require('./EnemyDirectionResult.js');
let exampleResult = require('./exampleResult.js');
let RfidInfo = require('./RfidInfo.js');
let ShootState = require('./ShootState.js');
let GridCells = require('./GridCells.js');
let GameBuffInfo = require('./GameBuffInfo.js');
let OccupancyGrid = require('./OccupancyGrid.js');
let MapMetaData = require('./MapMetaData.js');
let ObstacleMsg = require('./ObstacleMsg.js');
let GoalTask = require('./GoalTask.js');
let Odometry = require('./Odometry.js');
let GimbalAngle = require('./GimbalAngle.js');
let Path = require('./Path.js');
let ShootInfo = require('./ShootInfo.js');
let EnemyPos = require('./EnemyPos.js');
let RobotHurtData = require('./RobotHurtData.js');
let GameInfo = require('./GameInfo.js');

module.exports = {
  EnemyDirectionActionGoal: EnemyDirectionActionGoal,
  exampleAction: exampleAction,
  exampleActionGoal: exampleActionGoal,
  EnemyDirectionAction: EnemyDirectionAction,
  GlobalPlannerActionGoal: GlobalPlannerActionGoal,
  EnemyDirectionGoal: EnemyDirectionGoal,
  EnemyDirectionFeedback: EnemyDirectionFeedback,
  exampleGoal: exampleGoal,
  LocalizationActionFeedback: LocalizationActionFeedback,
  BotGoalActionGoal: BotGoalActionGoal,
  LocalPlannerAction: LocalPlannerAction,
  LocalizationActionResult: LocalizationActionResult,
  LocalizationActionGoal: LocalizationActionGoal,
  BotGoalGoal: BotGoalGoal,
  BotGoalAction: BotGoalAction,
  LocalPlannerFeedback: LocalPlannerFeedback,
  EnemyDirectionActionResult: EnemyDirectionActionResult,
  GlobalPlannerActionResult: GlobalPlannerActionResult,
  ArmorDetectionActionGoal: ArmorDetectionActionGoal,
  BotGoalResult: BotGoalResult,
  LocalPlannerActionFeedback: LocalPlannerActionFeedback,
  exampleFeedback: exampleFeedback,
  LocalPlannerResult: LocalPlannerResult,
  ArmorDetectionActionFeedback: ArmorDetectionActionFeedback,
  LocalizationResult: LocalizationResult,
  GlobalPlannerResult: GlobalPlannerResult,
  BotGoalActionResult: BotGoalActionResult,
  LocalPlannerActionGoal: LocalPlannerActionGoal,
  LocalPlannerActionResult: LocalPlannerActionResult,
  exampleActionResult: exampleActionResult,
  GlobalPlannerFeedback: GlobalPlannerFeedback,
  exampleActionFeedback: exampleActionFeedback,
  LocalPlannerGoal: LocalPlannerGoal,
  ArmorDetectionResult: ArmorDetectionResult,
  LocalizationAction: LocalizationAction,
  GlobalPlannerActionFeedback: GlobalPlannerActionFeedback,
  BotGoalFeedback: BotGoalFeedback,
  GlobalPlannerAction: GlobalPlannerAction,
  LocalizationGoal: LocalizationGoal,
  ArmorDetectionFeedback: ArmorDetectionFeedback,
  BotGoalActionFeedback: BotGoalActionFeedback,
  ArmorDetectionActionResult: ArmorDetectionActionResult,
  EnemyDirectionActionFeedback: EnemyDirectionActionFeedback,
  ArmorDetectionAction: ArmorDetectionAction,
  ArmorDetectionGoal: ArmorDetectionGoal,
  GlobalPlannerGoal: GlobalPlannerGoal,
  LocalizationFeedback: LocalizationFeedback,
  EnemyDirectionResult: EnemyDirectionResult,
  exampleResult: exampleResult,
  RfidInfo: RfidInfo,
  ShootState: ShootState,
  GridCells: GridCells,
  GameBuffInfo: GameBuffInfo,
  OccupancyGrid: OccupancyGrid,
  MapMetaData: MapMetaData,
  ObstacleMsg: ObstacleMsg,
  GoalTask: GoalTask,
  Odometry: Odometry,
  GimbalAngle: GimbalAngle,
  Path: Path,
  ShootInfo: ShootInfo,
  EnemyPos: EnemyPos,
  RobotHurtData: RobotHurtData,
  GameInfo: GameInfo,
};
