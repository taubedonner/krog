#pragma once

#include <string_view>

namespace CarbonIcons {

using Icon = const char*;

constexpr size_t _GlyphMin = 0x0E900;
constexpr size_t _GlyphMax = 0x0F22E;

namespace K {
constexpr Icon Unnamed = {"\xee\xa4\x80"};
constexpr Icon Filled = {"\xee\xa4\x81"};
}  // namespace K

namespace AcceptAction {
constexpr Icon Usage = {"\xee\xa4\x82"};
}

namespace Accessibility {
constexpr Icon Unnamed = {"\xee\xa4\x83"};
constexpr Icon Alt = {"\xee\xa4\x84"};
namespace Color {
constexpr Icon Unnamed = {"\xee\xa4\x85"};
constexpr Icon Filled = {"\xee\xa4\x86"};
}  // namespace Color

}  // namespace Accessibility

constexpr Icon Account = {"\xee\xa4\x87"};
namespace Accumulation {
constexpr Icon Ice = {"\xee\xa4\x88"};
constexpr Icon Precipitation = {"\xee\xa4\x89"};
constexpr Icon Rain = {"\xee\xa4\x8a"};
constexpr Icon Snow = {"\xee\xa4\x8b"};
}  // namespace Accumulation

namespace Action {
constexpr Icon Definition = {"\xee\xa4\x8c"};
constexpr Icon Usage = {"\xee\xa4\x8d"};
}  // namespace Action

constexpr Icon Activity = {"\xee\xa4\x8e"};
namespace Add {
constexpr Icon Unnamed = {"\xee\xa4\x8f"};
constexpr Icon Alt = {"\xee\xa4\x90"};
constexpr Icon Filled = {"\xee\xa4\x92"};
constexpr Icon Large = {"\xee\xa4\x93"};
}  // namespace Add

constexpr Icon AddComment = {"\xee\xa4\x91"};
constexpr Icon AgricultureAnalytics = {"\xee\xa4\x94"};
constexpr Icon Ai = {"\xee\xa4\x95"};
constexpr Icon AiBusinessImpactAssessment = {"\xee\xa4\x96"};
constexpr Icon AiFinancialSustainabilityCheck = {"\xee\xa4\x97"};
constexpr Icon AiGenerate = {"\xee\xa4\x98"};
namespace AiGovernance {
constexpr Icon Lifecycle = {"\xee\xa4\x99"};
constexpr Icon Tracked = {"\xee\xa4\x9a"};
constexpr Icon Untracked = {"\xee\xa4\x9b"};
}  // namespace AiGovernance

constexpr Icon AiLabel = {"\xee\xa4\x9c"};
constexpr Icon AiLaunch = {"\xee\xa4\x9d"};
constexpr Icon AiRecommend = {"\xee\xa4\x9e"};
namespace Airline {
constexpr Icon DigitalGate = {"\xee\xa4\x9f"};
constexpr Icon ManageGates = {"\xee\xa4\xa0"};
constexpr Icon PassengerCare = {"\xee\xa4\xa1"};
constexpr Icon RapidBoard = {"\xee\xa4\xa2"};
}  // namespace Airline

namespace Airplay {
constexpr Icon Unnamed = {"\xee\xa4\xa3"};
constexpr Icon Filled = {"\xee\xa4\xa4"};
}  // namespace Airplay

namespace Airport {
constexpr Icon _01 = {"\xee\xa4\xa5"};
constexpr Icon _02 = {"\xee\xa4\xa6"};
}  // namespace Airport

constexpr Icon AirportLocation = {"\xee\xa4\xa7"};
namespace Alarm {
constexpr Icon Unnamed = {"\xee\xa4\xa8"};
constexpr Icon Add = {"\xee\xa4\xa9"};
constexpr Icon Subtract = {"\xee\xa4\xaa"};
}  // namespace Alarm

namespace AlignBox {
constexpr Icon BottomCenter = {"\xee\xa4\xab"};
constexpr Icon BottomLeft = {"\xee\xa4\xac"};
constexpr Icon BottomRight = {"\xee\xa4\xad"};
constexpr Icon MiddleCenter = {"\xee\xa4\xae"};
constexpr Icon MiddleLeft = {"\xee\xa4\xaf"};
constexpr Icon MiddleRight = {"\xee\xa4\xb0"};
constexpr Icon TopCenter = {"\xee\xa4\xb1"};
constexpr Icon TopLeft = {"\xee\xa4\xb2"};
constexpr Icon TopRight = {"\xee\xa4\xb3"};
}  // namespace AlignBox

namespace Align {
constexpr Icon HorizontalCenter = {"\xee\xa4\xb4"};
constexpr Icon HorizontalLeft = {"\xee\xa4\xb5"};
constexpr Icon HorizontalRight = {"\xee\xa4\xb6"};
constexpr Icon VerticalBottom = {"\xee\xa4\xb7"};
constexpr Icon VerticalCenter = {"\xee\xa4\xb8"};
constexpr Icon VerticalTop = {"\xee\xa4\xb9"};
}  // namespace Align

namespace Analytics {
constexpr Icon Unnamed = {"\xee\xa4\xba"};
constexpr Icon Custom = {"\xee\xa4\xbb"};
constexpr Icon Reference = {"\xee\xa4\xbc"};
}  // namespace Analytics

constexpr Icon Anchor = {"\xee\xa4\xbd"};
constexpr Icon Aperture = {"\xee\xa4\xbe"};
namespace Api {
constexpr Icon Unnamed = {"\xee\xa4\xbf"};
constexpr Icon _1 = {"\xee\xa5\x80"};
constexpr Icon Key = {"\xee\xa5\x81"};
}  // namespace Api

constexpr Icon App = {"\xee\xa5\x82"};
constexpr Icon AppConnectivity = {"\xee\xa5\x83"};
namespace Apple {
constexpr Icon Unnamed = {"\xee\xa5\x84"};
constexpr Icon Dash = {"\xee\xa5\x85"};
}  // namespace Apple

namespace Application {
constexpr Icon Unnamed = {"\xee\xa5\x86"};
constexpr Icon Mobile = {"\xee\xa5\x87"};
constexpr Icon Virtual = {"\xee\xa5\x88"};
constexpr Icon Web = {"\xee\xa5\x89"};
}  // namespace Application

constexpr Icon Apps = {"\xee\xa5\x8a"};
constexpr Icon Archive = {"\xee\xa5\x8b"};
namespace Area {
constexpr Icon Unnamed = {"\xee\xa5\x8c"};
constexpr Icon Custom = {"\xee\xa5\x8d"};
}  // namespace Area

constexpr Icon ArithmeticMean = {"\xee\xa5\x8e"};
constexpr Icon ArithmeticMedian = {"\xee\xa5\x8f"};
namespace Arrange {
constexpr Icon Unnamed = {"\xee\xa5\x90"};
constexpr Icon Horizontal = {"\xee\xa5\x91"};
constexpr Icon Vertical = {"\xee\xa5\x92"};
}  // namespace Arrange

namespace Array {
constexpr Icon Unnamed = {"\xee\xa5\x93"};
constexpr Icon Booleans = {"\xee\xa5\x94"};
constexpr Icon Dates = {"\xee\xa5\x95"};
constexpr Icon Numbers = {"\xee\xa5\x96"};
constexpr Icon Objects = {"\xee\xa5\x97"};
constexpr Icon Strings = {"\xee\xa5\x98"};
}  // namespace Array

constexpr Icon Arrival = {"\xee\xa5\x99"};
namespace Arrow {
constexpr Icon Down = {"\xee\xa5\x9a"};
constexpr Icon DownLeft = {"\xee\xa5\x9b"};
constexpr Icon DownRight = {"\xee\xa5\x9c"};
constexpr Icon Left = {"\xee\xa5\x9d"};
constexpr Icon Right = {"\xee\xa5\x9e"};
constexpr Icon Up = {"\xee\xa5\xa2"};
constexpr Icon UpLeft = {"\xee\xa5\xa3"};
constexpr Icon UpRight = {"\xee\xa5\xa4"};
}  // namespace Arrow

constexpr Icon ArrowShiftDown = {"\xee\xa5\x9f"};
namespace Arrows {
constexpr Icon Horizontal = {"\xee\xa5\xa0"};
constexpr Icon Vertical = {"\xee\xa5\xa1"};
}  // namespace Arrows

namespace Asleep {
constexpr Icon Unnamed = {"\xee\xa5\xa5"};
constexpr Icon Filled = {"\xee\xa5\xa6"};
}  // namespace Asleep

namespace Assembly {
constexpr Icon Unnamed = {"\xee\xa5\xa7"};
constexpr Icon Cluster = {"\xee\xa5\xa8"};
constexpr Icon Reference = {"\xee\xa5\xa9"};
}  // namespace Assembly

namespace Asset {
constexpr Icon Unnamed = {"\xee\xa5\xaa"};
constexpr Icon Confirm = {"\xee\xa5\xab"};
constexpr Icon DigitalTwin = {"\xee\xa5\xac"};
constexpr Icon View = {"\xee\xa5\xae"};
}  // namespace Asset

constexpr Icon AssetMovement = {"\xee\xa5\xad"};
constexpr Icon Asterisk = {"\xee\xa5\xaf"};
constexpr Icon Async = {"\xee\xa5\xb0"};
constexpr Icon At = {"\xee\xa5\xb1"};
constexpr Icon Attachment = {"\xee\xa5\xb2"};
constexpr Icon AudioConsole = {"\xee\xa5\xb3"};
constexpr Icon AugmentedReality = {"\xee\xa5\xb4"};
constexpr Icon Automatic = {"\xee\xa5\xb5"};
constexpr Icon Autoscaling = {"\xee\xa5\xb6"};
constexpr Icon Avro = {"\xee\xa5\xb7"};
constexpr Icon Awake = {"\xee\xa5\xb8"};
constexpr Icon Badge = {"\xee\xa5\xb9"};
constexpr Icon BaggageClaim = {"\xee\xa5\xba"};
constexpr Icon Bar = {"\xee\xa5\xbb"};
constexpr Icon Barcode = {"\xee\xa5\xbc"};
namespace BareMetalServer {
constexpr Icon Unnamed = {"\xee\xa5\xbd"};
constexpr Icon _01 = {"\xee\xa5\xbe"};
constexpr Icon _02 = {"\xee\xa5\xbf"};
}  // namespace BareMetalServer

constexpr Icon Basketball = {"\xee\xa6\x80"};
constexpr Icon BastionHost = {"\xee\xa6\x81"};
constexpr Icon Bat = {"\xee\xa6\x82"};
namespace BatchJob {
constexpr Icon Unnamed = {"\xee\xa6\x83"};
constexpr Icon Step = {"\xee\xa6\x84"};
}  // namespace BatchJob

namespace Battery {
constexpr Icon Charging = {"\xee\xa6\x85"};
constexpr Icon Empty = {"\xee\xa6\x86"};
constexpr Icon Error = {"\xee\xa6\x87"};
constexpr Icon Full = {"\xee\xa6\x88"};
constexpr Icon Half = {"\xee\xa6\x89"};
constexpr Icon Low = {"\xee\xa6\x8a"};
constexpr Icon Quarter = {"\xee\xa6\x8b"};
constexpr Icon Warning = {"\xee\xa6\x8c"};
}  // namespace Battery

constexpr Icon Bee = {"\xee\xa6\x8d"};
constexpr Icon BeeBat = {"\xee\xa6\x8e"};
constexpr Icon Beta = {"\xee\xa6\x8f"};
constexpr Icon Bicycle = {"\xee\xa6\x90"};
namespace Binding {
constexpr Icon _01 = {"\xee\xa6\x91"};
constexpr Icon _02 = {"\xee\xa6\x92"};
}  // namespace Binding

constexpr Icon Binoculars = {"\xee\xa6\x93"};
constexpr Icon BlandAltmanPlot = {"\xee\xa6\x94"};
constexpr Icon Blockchain = {"\xee\xa6\x95"};
namespace BlockStorage {
constexpr Icon Unnamed = {"\xee\xa6\x96"};
constexpr Icon Alt = {"\xee\xa6\x97"};
}  // namespace BlockStorage

constexpr Icon Blog = {"\xee\xa6\x98"};
namespace Bluetooth {
constexpr Icon Unnamed = {"\xee\xa6\x99"};
constexpr Icon Off = {"\xee\xa6\x9a"};
}  // namespace Bluetooth

constexpr Icon Book = {"\xee\xa6\x9b"};
namespace Bookmark {
constexpr Icon Unnamed = {"\xee\xa6\x9c"};
constexpr Icon Add = {"\xee\xa6\x9d"};
constexpr Icon Filled = {"\xee\xa6\x9e"};
}  // namespace Bookmark

constexpr Icon Boolean = {"\xee\xa6\x9f"};
constexpr Icon Boot = {"\xee\xa6\xa0"};
namespace BootVolume {
constexpr Icon Unnamed = {"\xee\xa6\xa1"};
constexpr Icon Alt = {"\xee\xa6\xa2"};
}  // namespace BootVolume

namespace Border {
constexpr Icon Bottom = {"\xee\xa6\xa3"};
constexpr Icon Full = {"\xee\xa6\xa4"};
constexpr Icon Left = {"\xee\xa6\xa5"};
constexpr Icon None = {"\xee\xa6\xa6"};
constexpr Icon Right = {"\xee\xa6\xa7"};
constexpr Icon Top = {"\xee\xa6\xa8"};
}  // namespace Border

constexpr Icon Bot = {"\xee\xa6\xa9"};
namespace Bottles {
namespace _01 {
constexpr Icon Unnamed = {"\xee\xa6\xaa"};
constexpr Icon Dash = {"\xee\xa6\xab"};
}  // namespace _01

namespace _02 {
constexpr Icon Unnamed = {"\xee\xa6\xac"};
constexpr Icon Dash = {"\xee\xa6\xad"};
}  // namespace _02

constexpr Icon Container = {"\xee\xa6\xae"};
}  // namespace Bottles

namespace BottomPanel {
namespace Close {
constexpr Icon Unnamed = {"\xee\xa6\xaf"};
constexpr Icon Filled = {"\xee\xa6\xb0"};
}  // namespace Close

namespace Open {
constexpr Icon Unnamed = {"\xee\xa6\xb1"};
constexpr Icon Filled = {"\xee\xa6\xb2"};
}  // namespace Open

}  // namespace BottomPanel

namespace Box {
constexpr Icon Unnamed = {"\xee\xa6\xb3"};
constexpr Icon ExtraLarge = {"\xee\xa6\xb4"};
constexpr Icon Large = {"\xee\xa6\xb5"};
constexpr Icon Medium = {"\xee\xa6\xb6"};
constexpr Icon Small = {"\xee\xa6\xb8"};
}  // namespace Box

constexpr Icon BoxPlot = {"\xee\xa6\xb7"};
constexpr Icon Branch = {"\xee\xa6\xb9"};
constexpr Icon BreakingChange = {"\xee\xa6\xba"};
constexpr Icon BrightnessContrast = {"\xee\xa6\xbb"};
constexpr Icon BringForward = {"\xee\xa6\xbc"};
constexpr Icon BringToFront = {"\xee\xa6\xbd"};
namespace Build {
constexpr Icon Image = {"\xee\xa6\xbe"};
constexpr Icon Run = {"\xee\xa7\x83"};
}  // namespace Build

namespace Building {
constexpr Icon Unnamed = {"\xee\xa6\xbf"};
constexpr Icon Insights1 = {"\xee\xa7\x80"};
constexpr Icon Insights2 = {"\xee\xa7\x81"};
constexpr Icon Insights3 = {"\xee\xa7\x82"};
}  // namespace Building

constexpr Icon BuildTool = {"\xee\xa7\x84"};
constexpr Icon Bullhorn = {"\xee\xa7\x85"};
constexpr Icon Buoy = {"\xee\xa7\x86"};
constexpr Icon Bus = {"\xee\xa7\x87"};
constexpr Icon BusinessMetrics = {"\xee\xa7\x88"};
constexpr Icon BusinessProcesses = {"\xee\xa7\x89"};
namespace Button {
constexpr Icon Centered = {"\xee\xa7\x8a"};
constexpr Icon FlushLeft = {"\xee\xa7\x8b"};
}  // namespace Button

namespace CabinCare {
constexpr Icon Unnamed = {"\xee\xa7\x8c"};
constexpr Icon Alert = {"\xee\xa7\x8d"};
constexpr Icon Alt = {"\xee\xa7\x8e"};
}  // namespace CabinCare

constexpr Icon Cad = {"\xee\xa7\x8f"};
constexpr Icon Cafe = {"\xee\xa7\x90"};
namespace Calculation {
constexpr Icon Unnamed = {"\xee\xa7\x91"};
constexpr Icon Alt = {"\xee\xa7\x92"};
}  // namespace Calculation

namespace Calculator {
constexpr Icon Unnamed = {"\xee\xa7\x93"};
constexpr Icon Check = {"\xee\xa7\x94"};
}  // namespace Calculator

namespace Calendar {
constexpr Icon Unnamed = {"\xee\xa7\x95"};
namespace Add {
constexpr Icon Unnamed = {"\xee\xa7\x96"};
constexpr Icon Alt = {"\xee\xa7\x97"};
}  // namespace Add

constexpr Icon HeatMap = {"\xee\xa7\x98"};
constexpr Icon Settings = {"\xee\xa7\x99"};
constexpr Icon Tools = {"\xee\xa7\x9a"};
}  // namespace Calendar

constexpr Icon Calibrate = {"\xee\xa7\x9b"};
namespace Calls {
constexpr Icon Unnamed = {"\xee\xa7\x9c"};
constexpr Icon All = {"\xee\xa7\x9d"};
constexpr Icon Incoming = {"\xee\xa7\x9e"};
}  // namespace Calls

namespace Camera {
constexpr Icon Unnamed = {"\xee\xa7\x9f"};
constexpr Icon Action = {"\xee\xa7\xa0"};
}  // namespace Camera

constexpr Icon Campsite = {"\xee\xa7\xa1"};
namespace Car {
constexpr Icon Unnamed = {"\xee\xa7\xa2"};
constexpr Icon Front = {"\xee\xa7\xb2"};
}  // namespace Car

namespace Carbon {
constexpr Icon Unnamed = {"\xee\xa7\xa3"};
constexpr Icon UiBuilder = {"\xee\xa7\xaa"};
}  // namespace Carbon

constexpr Icon CarbonAccounting = {"\xee\xa7\xa4"};
constexpr Icon CarbonForAem = {"\xee\xa7\xa5"};
constexpr Icon CarbonForIbmDotcom = {"\xee\xa7\xa6"};
constexpr Icon CarbonForIbmProduct = {"\xee\xa7\xa7"};
constexpr Icon CarbonForMobile = {"\xee\xa7\xa8"};
constexpr Icon CarbonForSalesforce = {"\xee\xa7\xa9"};
namespace Caret {
constexpr Icon Down = {"\xee\xa7\xab"};
constexpr Icon Left = {"\xee\xa7\xac"};
constexpr Icon Right = {"\xee\xa7\xad"};
namespace Sort {
constexpr Icon Unnamed = {"\xee\xa7\xae"};
constexpr Icon Down = {"\xee\xa7\xaf"};
constexpr Icon Up = {"\xee\xa7\xb0"};
}  // namespace Sort

constexpr Icon Up = {"\xee\xa7\xb1"};
}  // namespace Caret

namespace Carousel {
constexpr Icon Horizontal = {"\xee\xa7\xb3"};
constexpr Icon Vertical = {"\xee\xa7\xb4"};
}  // namespace Carousel

namespace Catalog {
constexpr Icon Unnamed = {"\xee\xa7\xb5"};
constexpr Icon Publish = {"\xee\xa7\xb6"};
}  // namespace Catalog

constexpr Icon Categories = {"\xee\xa7\xb7"};
namespace Category {
constexpr Icon Unnamed = {"\xee\xa7\xb8"};
constexpr Icon Add = {"\xee\xa7\xb9"};
constexpr Icon And = {"\xee\xa7\xba"};
constexpr Icon New = {"\xee\xa7\xbb"};
constexpr Icon NewEach = {"\xee\xa7\xbc"};
}  // namespace Category

constexpr Icon Cda = {"\xee\xa7\xbd"};
constexpr Icon CellTower = {"\xee\xa7\xbe"};
namespace Center {
constexpr Icon Circle = {"\xee\xa7\xbf"};
constexpr Icon Square = {"\xee\xa8\x80"};
}  // namespace Center

constexpr Icon CenterToFit = {"\xee\xa8\x81"};
namespace Certificate {
constexpr Icon Unnamed = {"\xee\xa8\x82"};
constexpr Icon Check = {"\xee\xa8\x83"};
}  // namespace Certificate

constexpr Icon ChangeCatalog = {"\xee\xa8\x84"};
constexpr Icon Channels = {"\xee\xa8\x85"};
namespace Character {
constexpr Icon Decimal = {"\xee\xa8\x86"};
constexpr Icon FractionPath1 = {"\xee\xa8\x87"};
constexpr Icon FractionPath2 = {"\xee\xa8\x88"};
constexpr Icon FractionPath3 = {"\xee\xa8\x89"};
constexpr Icon FractionPath4 = {"\xee\xa8\x8a"};
constexpr Icon IntegerPath1 = {"\xee\xa8\x8b"};
constexpr Icon IntegerPath2 = {"\xee\xa8\x8c"};
constexpr Icon IntegerPath3 = {"\xee\xa8\x8d"};
constexpr Icon IntegerPath4 = {"\xee\xa8\x8e"};
constexpr Icon LowerCase = {"\xee\xa8\x8f"};
constexpr Icon NegativeNumberPath1 = {"\xee\xa8\x90"};
constexpr Icon NegativeNumberPath2 = {"\xee\xa8\x91"};
constexpr Icon NegativeNumberPath3 = {"\xee\xa8\x92"};
constexpr Icon SentenceCase = {"\xee\xa8\x94"};
constexpr Icon UpperCase = {"\xee\xa8\x95"};
constexpr Icon WholeNumberPath1 = {"\xee\xa8\x96"};
constexpr Icon WholeNumberPath2 = {"\xee\xa8\x97"};
constexpr Icon WholeNumberPath3 = {"\xee\xa8\x98"};
constexpr Icon WholeNumberPath4 = {"\xee\xa8\x99"};
}  // namespace Character

constexpr Icon CharacterPatterns = {"\xee\xa8\x93"};
namespace ChargingStation {
constexpr Icon Unnamed = {"\xee\xa8\x9a"};
constexpr Icon Filled = {"\xee\xa8\x9b"};
}  // namespace ChargingStation

namespace Chart {
constexpr Icon _3D = {"\xee\xa8\x9c"};
constexpr Icon Area = {"\xee\xa8\x9d"};
constexpr Icon AreaSmooth = {"\xee\xa8\x9e"};
constexpr Icon AreaStepper = {"\xee\xa8\x9f"};
constexpr Icon Average = {"\xee\xa8\xa0"};
constexpr Icon Bar = {"\xee\xa8\xa1"};
constexpr Icon BarFloating = {"\xee\xa8\xa2"};
constexpr Icon BarOverlay = {"\xee\xa8\xa3"};
constexpr Icon BarStacked = {"\xee\xa8\xa4"};
constexpr Icon BarTarget = {"\xee\xa8\xa5"};
constexpr Icon Bubble = {"\xee\xa8\xa6"};
constexpr Icon BubblePacked = {"\xee\xa8\xa7"};
constexpr Icon Bullet = {"\xee\xa8\xa8"};
constexpr Icon Candlestick = {"\xee\xa8\xa9"};
constexpr Icon ClusterBar = {"\xee\xa8\xaa"};
constexpr Icon Column = {"\xee\xa8\xab"};
constexpr Icon ColumnFloating = {"\xee\xa8\xac"};
constexpr Icon ColumnTarget = {"\xee\xa8\xad"};
constexpr Icon Combo = {"\xee\xa8\xae"};
constexpr Icon ComboStacked = {"\xee\xa8\xaf"};
constexpr Icon Custom = {"\xee\xa8\xb0"};
constexpr Icon DualYAxis = {"\xee\xa8\xb1"};
namespace ErrorBar {
constexpr Icon Unnamed = {"\xee\xa8\xb2"};
constexpr Icon Alt = {"\xee\xa8\xb3"};
}  // namespace ErrorBar

constexpr Icon Evaluation = {"\xee\xa8\xb4"};
constexpr Icon HighLow = {"\xee\xa8\xb5"};
constexpr Icon Histogram = {"\xee\xa8\xb6"};
namespace Line {
constexpr Icon Unnamed = {"\xee\xa8\xb7"};
constexpr Icon Data = {"\xee\xa8\xb8"};
}  // namespace Line

constexpr Icon LineSmooth = {"\xee\xa8\xb9"};
constexpr Icon LogisticRegression = {"\xee\xa8\xba"};
constexpr Icon Marimekko = {"\xee\xa8\xbb"};
constexpr Icon Maximum = {"\xee\xa8\xbc"};
constexpr Icon Median = {"\xee\xa8\xbd"};
constexpr Icon Minimum = {"\xee\xa8\xbe"};
constexpr Icon MultiLine = {"\xee\xa8\xbf"};
constexpr Icon Multitype = {"\xee\xa9\x80"};
constexpr Icon Network = {"\xee\xa9\x81"};
constexpr Icon Parallel = {"\xee\xa9\x82"};
constexpr Icon Pie = {"\xee\xa9\x83"};
constexpr Icon PlanningWaterfall = {"\xee\xa9\x84"};
constexpr Icon Point = {"\xee\xa9\x85"};
constexpr Icon Population = {"\xee\xa9\x86"};
constexpr Icon Radar = {"\xee\xa9\x87"};
constexpr Icon Radial = {"\xee\xa9\x88"};
constexpr Icon Relationship = {"\xee\xa9\x89"};
constexpr Icon Ring = {"\xee\xa9\x8a"};
constexpr Icon River = {"\xee\xa9\x8b"};
constexpr Icon Rose = {"\xee\xa9\x8c"};
constexpr Icon Scatter = {"\xee\xa9\x8d"};
constexpr Icon Spiral = {"\xee\xa9\x8e"};
constexpr Icon Stacked = {"\xee\xa9\x8f"};
constexpr Icon Stepper = {"\xee\xa9\x90"};
constexpr Icon Sunburst = {"\xee\xa9\x91"};
constexpr Icon Treemap = {"\xee\xa9\x92"};
constexpr Icon TSne = {"\xee\xa9\x93"};
constexpr Icon VennDiagram = {"\xee\xa9\x94"};
constexpr Icon ViolinPlot = {"\xee\xa9\x95"};
constexpr Icon Waterfall = {"\xee\xa9\x96"};
constexpr Icon WinLoss = {"\xee\xa9\x97"};
}  // namespace Chart

namespace Chat {
constexpr Icon Unnamed = {"\xee\xa9\x98"};
constexpr Icon Launch = {"\xee\xa9\x9a"};
constexpr Icon Off = {"\xee\xa9\x9b"};
constexpr Icon Operational = {"\xee\xa9\x9c"};
}  // namespace Chat

constexpr Icon ChatBot = {"\xee\xa9\x99"};
namespace Checkbox {
constexpr Icon Unnamed = {"\xee\xa9\x9d"};
namespace Checked {
constexpr Icon Unnamed = {"\xee\xa9\x9e"};
constexpr Icon Filled = {"\xee\xa9\x9f"};
}  // namespace Checked

namespace Indeterminate {
constexpr Icon Unnamed = {"\xee\xa9\xa0"};
constexpr Icon Filled = {"\xee\xa9\xa1"};
}  // namespace Indeterminate

}  // namespace Checkbox

namespace Checkmark {
constexpr Icon Unnamed = {"\xee\xa9\xa2"};
namespace Filled {
constexpr Icon Unnamed = {"\xee\xa9\xa3"};
constexpr Icon Error = {"\xee\xa9\xa4"};
constexpr Icon Warning = {"\xee\xa9\xa5"};
}  // namespace Filled

namespace Outline {
constexpr Icon Unnamed = {"\xee\xa9\xa6"};
constexpr Icon Error = {"\xee\xa9\xa7"};
constexpr Icon Warning = {"\xee\xa9\xa8"};
}  // namespace Outline

}  // namespace Checkmark

namespace Chemistry {
constexpr Icon Unnamed = {"\xee\xa9\xa9"};
constexpr Icon Reference = {"\xee\xa9\xaa"};
}  // namespace Chemistry

namespace Chevron {
namespace Down {
constexpr Icon Unnamed = {"\xee\xa9\xab"};
constexpr Icon Outline = {"\xee\xa9\xac"};
}  // namespace Down

constexpr Icon Left = {"\xee\xa9\xad"};
constexpr Icon Mini = {"\xee\xa9\xae"};
constexpr Icon Right = {"\xee\xa9\xaf"};
namespace Sort {
constexpr Icon Unnamed = {"\xee\xa9\xb0"};
constexpr Icon Down = {"\xee\xa9\xb1"};
constexpr Icon Up = {"\xee\xa9\xb2"};
}  // namespace Sort

namespace Up {
constexpr Icon Unnamed = {"\xee\xa9\xb3"};
constexpr Icon Outline = {"\xee\xa9\xb4"};
}  // namespace Up

}  // namespace Chevron

constexpr Icon Chip = {"\xee\xa9\xb5"};
constexpr Icon Choices = {"\xee\xa9\xb6"};
constexpr Icon ChooseItem = {"\xee\xa9\xb7"};
constexpr Icon ChoroplethMap = {"\xee\xa9\xb8"};
namespace Cics {
constexpr Icon Cmas = {"\xee\xa9\xb9"};
constexpr Icon Db2Connection = {"\xee\xa9\xba"};
constexpr Icon Explorer = {"\xee\xa9\xbb"};
constexpr Icon Program = {"\xee\xa9\xbd"};
constexpr Icon Sit = {"\xee\xaa\x82"};
constexpr Icon SitOverrides = {"\xee\xaa\x83"};
constexpr Icon SystemGroup = {"\xee\xaa\x84"};
constexpr Icon TransactionServerZos = {"\xee\xaa\x85"};
constexpr Icon WuiRegion = {"\xee\xaa\x86"};
}  // namespace Cics

constexpr Icon Cicsplex = {"\xee\xa9\xbc"};
namespace CicsRegion {
constexpr Icon Unnamed = {"\xee\xa9\xbe"};
constexpr Icon Alt = {"\xee\xa9\xbf"};
constexpr Icon Routing = {"\xee\xaa\x80"};
constexpr Icon Target = {"\xee\xaa\x81"};
}  // namespace CicsRegion

constexpr Icon CircleDash = {"\xee\xaa\x87"};
namespace Circle {
constexpr Icon Filled = {"\xee\xaa\x88"};
constexpr Icon Outline = {"\xee\xaa\x89"};
constexpr Icon Solid = {"\xee\xaa\x8b"};
}  // namespace Circle

constexpr Icon CirclePacking = {"\xee\xaa\x8a"};
constexpr Icon Classification = {"\xee\xaa\x8c"};
namespace Classifier {
constexpr Icon Language = {"\xee\xaa\x8d"};
}

constexpr Icon Clean = {"\xee\xaa\x8e"};
namespace Close {
constexpr Icon Unnamed = {"\xee\xaa\x8f"};
constexpr Icon Filled = {"\xee\xaa\x93"};
constexpr Icon Large = {"\xee\xaa\x94"};
constexpr Icon Outline = {"\xee\xaa\x95"};
}  // namespace Close

namespace ClosedCaption {
constexpr Icon Unnamed = {"\xee\xaa\x90"};
constexpr Icon Alt = {"\xee\xaa\x91"};
constexpr Icon Filled = {"\xee\xaa\x92"};
}  // namespace ClosedCaption

namespace Cloud {
constexpr Icon Unnamed = {"\xee\xaa\x96"};
constexpr Icon Alerting = {"\xee\xaa\x97"};
constexpr Icon Auditing = {"\xee\xaa\x99"};
constexpr Icon DataOps = {"\xee\xaa\x9b"};
constexpr Icon Download = {"\xee\xaa\x9c"};
constexpr Icon Logging = {"\xee\xaa\x9f"};
constexpr Icon Monitoring = {"\xee\xaa\xa0"};
constexpr Icon Offline = {"\xee\xaa\xa1"};
constexpr Icon ServiceManagement = {"\xee\xaa\xaa"};
constexpr Icon Upload = {"\xee\xaa\xac"};
}  // namespace Cloud

constexpr Icon CloudApp = {"\xee\xaa\x98"};
constexpr Icon CloudCeiling = {"\xee\xaa\x9a"};
namespace CloudFoundry {
constexpr Icon _1 = {"\xee\xaa\x9d"};
constexpr Icon _2 = {"\xee\xaa\x9e"};
}  // namespace CloudFoundry

constexpr Icon CloudRegistry = {"\xee\xaa\xa2"};
constexpr Icon CloudSatellitePath1 = {"\xee\xaa\xa3"};
constexpr Icon CloudSatellitePath2 = {"\xee\xaa\xa4"};
constexpr Icon CloudSatellitePath3 = {"\xee\xaa\xa5"};
constexpr Icon CloudSatellitePath4 = {"\xee\xaa\xa6"};
namespace CloudSatellite {
constexpr Icon Config = {"\xee\xaa\xa7"};
constexpr Icon Link = {"\xee\xaa\xa8"};
constexpr Icon Services = {"\xee\xaa\xa9"};
}  // namespace CloudSatellite

constexpr Icon CloudServices = {"\xee\xaa\xab"};
constexpr Icon Cloudy = {"\xee\xaa\xad"};
namespace Code {
constexpr Icon Unnamed = {"\xee\xaa\xae"};
constexpr Icon Hide = {"\xee\xaa\xb0"};
constexpr Icon Reference = {"\xee\xaa\xb1"};
}  // namespace Code

constexpr Icon CodeBlock = {"\xee\xaa\xaf"};
constexpr Icon CodeSigningService = {"\xee\xaa\xb2"};
constexpr Icon Cognitive = {"\xee\xaa\xb3"};
constexpr Icon Collaborate = {"\xee\xaa\xb4"};
constexpr Icon CollapseAll = {"\xee\xaa\xb5"};
constexpr Icon CollapseCategories = {"\xee\xaa\xb6"};
constexpr Icon ColorPalette = {"\xee\xaa\xb7"};
constexpr Icon ColorSwitch = {"\xee\xaa\xb8"};
namespace Column {
constexpr Icon Unnamed = {"\xee\xaa\xb9"};
constexpr Icon Delete = {"\xee\xaa\xba"};
constexpr Icon Insert = {"\xee\xaa\xbc"};
}  // namespace Column

constexpr Icon ColumnDependency = {"\xee\xaa\xbb"};
constexpr Icon Commit = {"\xee\xaa\xbd"};
namespace Communication {
constexpr Icon Unified = {"\xee\xaa\xbe"};
}

constexpr Icon Compare = {"\xee\xaa\xbf"};
constexpr Icon Compass = {"\xee\xab\x80"};
constexpr Icon Concept = {"\xee\xab\x81"};
namespace Condition {
constexpr Icon Point = {"\xee\xab\x82"};
constexpr Icon WaitPoint = {"\xee\xab\x83"};
}  // namespace Condition

namespace Connect {
constexpr Icon Unnamed = {"\xee\xab\x84"};
constexpr Icon Recursive = {"\xee\xab\x8c"};
constexpr Icon Reference = {"\xee\xab\x8d"};
constexpr Icon Source = {"\xee\xab\x8e"};
constexpr Icon Target = {"\xee\xab\x8f"};
}  // namespace Connect

namespace ConnectionFlow {
constexpr Icon Usage = {"\xee\xab\x85"};
}

namespace Connection {
constexpr Icon Receive = {"\xee\xab\x86"};
constexpr Icon Send = {"\xee\xab\x87"};
constexpr Icon TwoWay = {"\xee\xab\x8a"};
constexpr Icon Usage = {"\xee\xab\x8b"};
}  // namespace Connection

namespace ConnectionSignal {
constexpr Icon Unnamed = {"\xee\xab\x88"};
constexpr Icon Off = {"\xee\xab\x89"};
}  // namespace ConnectionSignal

constexpr Icon Constraint = {"\xee\xab\x90"};
constexpr Icon Construction = {"\xee\xab\x91"};
namespace Container {
constexpr Icon Engine = {"\xee\xab\x92"};
constexpr Icon Image = {"\xee\xab\x93"};
constexpr Icon Runtime = {"\xee\xab\x98"};
constexpr Icon RuntimeMonitor = {"\xee\xab\x99"};
}  // namespace Container

namespace ContainerImage {
constexpr Icon Pull = {"\xee\xab\x94"};
constexpr Icon Push = {"\xee\xab\x95"};
constexpr Icon PushPull = {"\xee\xab\x96"};
}  // namespace ContainerImage

constexpr Icon ContainerRegistry = {"\xee\xab\x97"};
constexpr Icon ContainerServices = {"\xee\xab\x9a"};
constexpr Icon ContainerSoftware = {"\xee\xab\x9b"};
constexpr Icon ContentDeliveryNetwork = {"\xee\xab\x9c"};
constexpr Icon ContentView = {"\xee\xab\x9d"};
namespace Continue {
constexpr Icon Unnamed = {"\xee\xab\x9e"};
constexpr Icon Filled = {"\xee\xab\x9f"};
}  // namespace Continue

constexpr Icon ContinuousDeployment = {"\xee\xab\xa0"};
constexpr Icon ContinuousIntegration = {"\xee\xab\xa1"};
constexpr Icon Contrast = {"\xee\xab\xa2"};
constexpr Icon ConvertToCloud = {"\xee\xab\xa3"};
constexpr Icon Cookie = {"\xee\xab\xa4"};
namespace Copy {
constexpr Icon Unnamed = {"\xee\xab\xa5"};
constexpr Icon File = {"\xee\xab\xa6"};
constexpr Icon Link = {"\xee\xab\xa7"};
}  // namespace Copy

constexpr Icon Corn = {"\xee\xab\xa8"};
constexpr Icon Corner = {"\xee\xab\xa9"};
constexpr Icon Coronavirus = {"\xee\xab\xaa"};
namespace Cost {
constexpr Icon Unnamed = {"\xee\xab\xab"};
constexpr Icon Total = {"\xee\xab\xac"};
}  // namespace Cost

constexpr Icon Cough = {"\xee\xab\xad"};
constexpr Icon Course = {"\xee\xab\xae"};
constexpr Icon Covariate = {"\xee\xab\xaf"};
constexpr Icon CreateLink = {"\xee\xab\xb0"};
constexpr Icon Credentials = {"\xee\xab\xb1"};
constexpr Icon Crop = {"\xee\xab\xb2"};
constexpr Icon CropGrowth = {"\xee\xab\xb3"};
constexpr Icon CropHealth = {"\xee\xab\xb4"};
constexpr Icon Crossroads = {"\xee\xab\xb5"};
constexpr Icon CrossTab = {"\xee\xab\xb6"};
namespace CrowdReport {
constexpr Icon Unnamed = {"\xee\xab\xb7"};
constexpr Icon Filled = {"\xee\xab\xb8"};
}  // namespace CrowdReport

constexpr Icon Csv = {"\xee\xab\xb9"};
constexpr Icon Cube = {"\xee\xab\xba"};
constexpr Icon CubeView = {"\xee\xab\xbb"};
namespace Currency {
constexpr Icon Unnamed = {"\xee\xab\xbc"};
constexpr Icon Baht = {"\xee\xab\xbd"};
constexpr Icon Dollar = {"\xee\xab\xbe"};
constexpr Icon Euro = {"\xee\xab\xbf"};
constexpr Icon Lira = {"\xee\xac\x80"};
constexpr Icon Pound = {"\xee\xac\x81"};
constexpr Icon Ruble = {"\xee\xac\x82"};
constexpr Icon Rupee = {"\xee\xac\x83"};
constexpr Icon Shekel = {"\xee\xac\x84"};
constexpr Icon Won = {"\xee\xac\x85"};
constexpr Icon Yen = {"\xee\xac\x86"};
}  // namespace Currency

namespace Cursor {
constexpr Icon _1 = {"\xee\xac\x87"};
constexpr Icon _2 = {"\xee\xac\x88"};
}  // namespace Cursor

constexpr Icon Customer = {"\xee\xac\x89"};
constexpr Icon CustomerService = {"\xee\xac\x8a"};
constexpr Icon Cut = {"\xee\xac\x8b"};
constexpr Icon CutOut = {"\xee\xac\x8c"};
constexpr Icon Cyclist = {"\xee\xac\x8d"};
namespace Dashboard {
constexpr Icon Unnamed = {"\xee\xac\x8e"};
constexpr Icon Reference = {"\xee\xac\x8f"};
}  // namespace Dashboard

namespace Data {
constexpr Icon _1 = {"\xee\xac\x90"};
constexpr Icon _2 = {"\xee\xac\x91"};
namespace Base {
constexpr Icon Unnamed = {"\xee\xac\x95"};
constexpr Icon Alt = {"\xee\xac\x96"};
}  // namespace Base

constexpr Icon Categorical = {"\xee\xac\xa3"};
constexpr Icon Center = {"\xee\xac\xa4"};
constexpr Icon Check = {"\xee\xac\xa5"};
constexpr Icon Connected = {"\xee\xac\xa8"};
constexpr Icon Error = {"\xee\xac\xad"};
constexpr Icon Format = {"\xee\xac\xae"};
constexpr Icon Reference = {"\xee\xac\xb1"};
constexpr Icon Regular = {"\xee\xac\xb4"};
constexpr Icon Set = {"\xee\xac\xb5"};
constexpr Icon Structured = {"\xee\xac\xb8"};
constexpr Icon Unreal = {"\xee\xac\xbb"};
constexpr Icon Unstructured = {"\xee\xac\xbc"};
namespace View {
constexpr Icon Unnamed = {"\xee\xac\xbd"};
constexpr Icon Alt = {"\xee\xac\xbe"};
}  // namespace View

}  // namespace Data

constexpr Icon DataAccessor = {"\xee\xac\x92"};
constexpr Icon DataAnalytics = {"\xee\xac\x93"};
constexpr Icon DataBackup = {"\xee\xac\x94"};
namespace Database {
constexpr Icon Datastax = {"\xee\xac\x97"};
constexpr Icon Elastic = {"\xee\xac\x98"};
constexpr Icon Enterprisedb = {"\xee\xac\x99"};
constexpr Icon EnterpriseDb2 = {"\xee\xac\x9a"};
constexpr Icon Etcd = {"\xee\xac\x9b"};
constexpr Icon Messaging = {"\xee\xac\x9c"};
constexpr Icon Mongodb = {"\xee\xac\x9d"};
constexpr Icon Postgresql = {"\xee\xac\x9e"};
constexpr Icon Rabbit = {"\xee\xac\x9f"};
constexpr Icon Redis = {"\xee\xac\xa0"};
}  // namespace Database

constexpr Icon DataBin = {"\xee\xac\xa1"};
constexpr Icon DataBlob = {"\xee\xac\xa2"};
constexpr Icon DataClass = {"\xee\xac\xa6"};
constexpr Icon DataCollection = {"\xee\xac\xa7"};
constexpr Icon DataDefinition = {"\xee\xac\xa9"};
constexpr Icon DataDiode = {"\xee\xac\xaa"};
namespace DataEnrichment {
constexpr Icon Unnamed = {"\xee\xac\xab"};
constexpr Icon Add = {"\xee\xac\xac"};
}  // namespace DataEnrichment

constexpr Icon DataPlayer = {"\xee\xac\xaf"};
constexpr Icon DataQualityDefinition = {"\xee\xac\xb0"};
namespace DataRefinery {
constexpr Icon Unnamed = {"\xee\xac\xb2"};
constexpr Icon Reference = {"\xee\xac\xb3"};
}  // namespace DataRefinery

constexpr Icon DataShare = {"\xee\xac\xb6"};
constexpr Icon Datastore = {"\xee\xac\xb7"};
namespace DataTable {
constexpr Icon Unnamed = {"\xee\xac\xb9"};
constexpr Icon Reference = {"\xee\xac\xba"};
}  // namespace DataTable

namespace DataVis {
constexpr Icon _1 = {"\xee\xac\xbf"};
constexpr Icon _2 = {"\xee\xad\x80"};
constexpr Icon _3 = {"\xee\xad\x81"};
constexpr Icon _4 = {"\xee\xad\x82"};
}  // namespace DataVis

namespace DataVolume {
constexpr Icon Unnamed = {"\xee\xad\x83"};
constexpr Icon Alt = {"\xee\xad\x84"};
}  // namespace DataVolume

namespace Db2 {
constexpr Icon BufferPool = {"\xee\xad\x85"};
constexpr Icon Database = {"\xee\xad\x86"};
constexpr Icon DataSharingGroup = {"\xee\xad\x87"};
}  // namespace Db2

constexpr Icon Debug = {"\xee\xad\x88"};
constexpr Icon DecisionNode = {"\xee\xad\x89"};
constexpr Icon DecisionTree = {"\xee\xad\x8a"};
constexpr Icon Delete = {"\xee\xad\x8b"};
namespace Delivery {
constexpr Icon Unnamed = {"\xee\xad\x8c"};
constexpr Icon Add = {"\xee\xad\x8d"};
constexpr Icon Parcel = {"\xee\xad\x8e"};
}  // namespace Delivery

constexpr Icon DeliverySettings = {"\xee\xad\x8f"};
constexpr Icon DeliveryTruck = {"\xee\xad\x90"};
constexpr Icon Demo = {"\xee\xad\x91"};
constexpr Icon Departure = {"\xee\xad\x92"};
constexpr Icon Deploy = {"\xee\xad\x93"};
constexpr Icon DeploymentPattern = {"\xee\xad\x94"};
constexpr Icon DeploymentPolicy = {"\xee\xad\x95"};
namespace DeploymentUnit {
constexpr Icon Data = {"\xee\xad\x96"};
constexpr Icon Execution = {"\xee\xad\x97"};
constexpr Icon Installation = {"\xee\xad\x98"};
constexpr Icon Presentation = {"\xee\xad\x99"};
namespace Technical {
constexpr Icon Data = {"\xee\xad\x9a"};
constexpr Icon Execution = {"\xee\xad\x9b"};
constexpr Icon Installation = {"\xee\xad\x9c"};
constexpr Icon Presentation = {"\xee\xad\x9d"};
}  // namespace Technical

}  // namespace DeploymentUnit

constexpr Icon DeployRules = {"\xee\xad\x9e"};
namespace Desk {
constexpr Icon Adjustable = {"\xee\xad\x9f"};
}

constexpr Icon Development = {"\xee\xad\xa0"};
namespace Devices {
constexpr Icon Unnamed = {"\xee\xad\xa1"};
constexpr Icon Apps = {"\xee\xad\xa2"};
}  // namespace Devices

namespace DewPoint {
constexpr Icon Unnamed = {"\xee\xad\xa3"};
constexpr Icon Filled = {"\xee\xad\xa4"};
}  // namespace DewPoint

namespace Diagram {
constexpr Icon Unnamed = {"\xee\xad\xa5"};
constexpr Icon Reference = {"\xee\xad\xa6"};
}  // namespace Diagram

namespace Diamond {
constexpr Icon Outline = {"\xee\xad\xa7"};
constexpr Icon Solid = {"\xee\xad\xa8"};
}  // namespace Diamond

namespace Direction {
namespace BearRight {
namespace _01 {
constexpr Icon Unnamed = {"\xee\xad\xa9"};
constexpr Icon Filled = {"\xee\xad\xaa"};
}  // namespace _01

namespace _02 {
constexpr Icon Unnamed = {"\xee\xad\xab"};
constexpr Icon Filled = {"\xee\xad\xac"};
}  // namespace _02

}  // namespace BearRight

namespace Curve {
constexpr Icon Unnamed = {"\xee\xad\xad"};
constexpr Icon Filled = {"\xee\xad\xae"};
}  // namespace Curve

namespace Fork {
constexpr Icon Unnamed = {"\xee\xad\xaf"};
constexpr Icon Filled = {"\xee\xad\xb0"};
}  // namespace Fork

namespace LoopLeft {
constexpr Icon Unnamed = {"\xee\xad\xb1"};
constexpr Icon Filled = {"\xee\xad\xb2"};
}  // namespace LoopLeft

namespace LoopRight {
constexpr Icon Unnamed = {"\xee\xad\xb3"};
constexpr Icon Filled = {"\xee\xad\xb4"};
}  // namespace LoopRight

namespace Merge {
constexpr Icon Unnamed = {"\xee\xad\xb5"};
constexpr Icon Filled = {"\xee\xad\xb6"};
}  // namespace Merge

namespace Right {
namespace _01 {
constexpr Icon Unnamed = {"\xee\xad\xb7"};
constexpr Icon Filled = {"\xee\xad\xb8"};
}  // namespace _01

namespace _02 {
constexpr Icon Unnamed = {"\xee\xad\xb9"};
constexpr Icon Filled = {"\xee\xad\xba"};
}  // namespace _02

}  // namespace Right

namespace Rotary {
namespace FirstRight {
constexpr Icon Unnamed = {"\xee\xad\xbb"};
constexpr Icon Filled = {"\xee\xad\xbc"};
}  // namespace FirstRight

namespace Right {
constexpr Icon Unnamed = {"\xee\xad\xbd"};
constexpr Icon Filled = {"\xee\xad\xbe"};
}  // namespace Right

namespace Straight {
constexpr Icon Unnamed = {"\xee\xad\xbf"};
constexpr Icon Filled = {"\xee\xae\x80"};
}  // namespace Straight

}  // namespace Rotary

namespace SharpTurn {
constexpr Icon Unnamed = {"\xee\xae\x81"};
constexpr Icon Filled = {"\xee\xae\x82"};
}  // namespace SharpTurn

namespace Straight {
constexpr Icon Unnamed = {"\xee\xae\x83"};
constexpr Icon Filled = {"\xee\xae\x84"};
namespace Right {
constexpr Icon Unnamed = {"\xee\xae\x85"};
constexpr Icon Filled = {"\xee\xae\x86"};
}  // namespace Right

}  // namespace Straight

namespace UTurn {
constexpr Icon Unnamed = {"\xee\xae\x87"};
constexpr Icon Filled = {"\xee\xae\x88"};
}  // namespace UTurn

}  // namespace Direction

constexpr Icon DirectLink = {"\xee\xae\x89"};
constexpr Icon DirectoryDomain = {"\xee\xae\x8a"};
namespace Distribute {
constexpr Icon HorizontalCenter = {"\xee\xae\x8b"};
constexpr Icon HorizontalLeft = {"\xee\xae\x8c"};
constexpr Icon HorizontalRight = {"\xee\xae\x8d"};
constexpr Icon VerticalBottom = {"\xee\xae\x8e"};
constexpr Icon VerticalCenter = {"\xee\xae\x8f"};
constexpr Icon VerticalTop = {"\xee\xae\x90"};
}  // namespace Distribute

constexpr Icon DnsServices = {"\xee\xae\x91"};
constexpr Icon Doc = {"\xee\xae\x92"};
namespace Document {
constexpr Icon Unnamed = {"\xee\xae\x93"};
constexpr Icon Add = {"\xee\xae\x94"};
constexpr Icon Attachment = {"\xee\xae\x95"};
constexpr Icon Audio = {"\xee\xae\x96"};
constexpr Icon Blank = {"\xee\xae\x97"};
constexpr Icon Comment = {"\xee\xae\x98"};
constexpr Icon Configuration = {"\xee\xae\x99"};
constexpr Icon Download = {"\xee\xae\x9a"};
constexpr Icon Epdf = {"\xee\xae\x9b"};
constexpr Icon Export = {"\xee\xae\x9c"};
constexpr Icon Horizontal = {"\xee\xae\x9d"};
constexpr Icon Import = {"\xee\xae\x9e"};
constexpr Icon Multiple01 = {"\xee\xae\x9f"};
constexpr Icon Multiple02 = {"\xee\xae\xa0"};
constexpr Icon Pdf = {"\xee\xae\xa1"};
constexpr Icon Preliminary = {"\xee\xae\xa2"};
constexpr Icon Processor = {"\xee\xae\xa3"};
constexpr Icon Protected = {"\xee\xae\xa4"};
constexpr Icon Requirements = {"\xee\xae\xa5"};
constexpr Icon Security = {"\xee\xae\xa6"};
constexpr Icon Signed = {"\xee\xae\xa8"};
constexpr Icon Sketch = {"\xee\xae\xa9"};
constexpr Icon Subject = {"\xee\xae\xaa"};
constexpr Icon Subtract = {"\xee\xae\xab"};
constexpr Icon Tasks = {"\xee\xae\xac"};
constexpr Icon Unknown = {"\xee\xae\xad"};
constexpr Icon Unprotected = {"\xee\xae\xae"};
constexpr Icon Vertical = {"\xee\xae\xaf"};
constexpr Icon Video = {"\xee\xae\xb0"};
constexpr Icon View = {"\xee\xae\xb1"};
namespace WordProcessor {
constexpr Icon Unnamed = {"\xee\xae\xb2"};
constexpr Icon Reference = {"\xee\xae\xb3"};
}  // namespace WordProcessor

}  // namespace Document

constexpr Icon DocumentSentiment = {"\xee\xae\xa7"};
constexpr Icon DogWalker = {"\xee\xae\xb4"};
constexpr Icon DotMark = {"\xee\xae\xb5"};
constexpr Icon DoubleInteger = {"\xee\xae\xb6"};
constexpr Icon Download = {"\xee\xae\xb7"};
constexpr Icon Downstream = {"\xee\xae\xb8"};
constexpr Icon DownToBottom = {"\xee\xae\xb9"};
constexpr Icon Draggable = {"\xee\xae\xba"};
namespace Drag {
constexpr Icon Horizontal = {"\xee\xae\xbb"};
constexpr Icon Vertical = {"\xee\xae\xbc"};
}  // namespace Drag

constexpr Icon Draw = {"\xee\xae\xbd"};
constexpr Icon DrillBack = {"\xee\xae\xbe"};
constexpr Icon DrillDown = {"\xee\xae\xbf"};
constexpr Icon DrillThrough = {"\xee\xaf\x80"};
namespace Drink {
constexpr Icon _01 = {"\xee\xaf\x81"};
constexpr Icon _02 = {"\xee\xaf\x82"};
}  // namespace Drink

constexpr Icon DriverAnalysis = {"\xee\xaf\x83"};
namespace Drone {
constexpr Icon Unnamed = {"\xee\xaf\x84"};
constexpr Icon Delivery = {"\xee\xaf\x85"};
constexpr Icon Front = {"\xee\xaf\x86"};
constexpr Icon Video = {"\xee\xaf\x87"};
}  // namespace Drone

namespace DropPhoto {
constexpr Icon Unnamed = {"\xee\xaf\x88"};
constexpr Icon Filled = {"\xee\xaf\x89"};
}  // namespace DropPhoto

constexpr Icon Drought = {"\xee\xaf\x8a"};
constexpr Icon Dvr = {"\xee\xaf\x8b"};
namespace Earth {
constexpr Icon Unnamed = {"\xee\xaf\x8c"};
namespace Americas {
constexpr Icon Unnamed = {"\xee\xaf\x8d"};
constexpr Icon Filled = {"\xee\xaf\x8e"};
}  // namespace Americas

namespace EuropeAfrica {
constexpr Icon Unnamed = {"\xee\xaf\x8f"};
constexpr Icon Filled = {"\xee\xaf\x90"};
}  // namespace EuropeAfrica

constexpr Icon Filled = {"\xee\xaf\x91"};
namespace SoutheastAsia {
constexpr Icon Unnamed = {"\xee\xaf\x93"};
constexpr Icon Filled = {"\xee\xaf\x94"};
}  // namespace SoutheastAsia

}  // namespace Earth

constexpr Icon Earthquake = {"\xee\xaf\x92"};
constexpr Icon EdgeCluster = {"\xee\xaf\x95"};
constexpr Icon EdgeDevice = {"\xee\xaf\x96"};
namespace EdgeNode {
constexpr Icon Unnamed = {"\xee\xaf\x97"};
constexpr Icon Alt = {"\xee\xaf\x98"};
}  // namespace EdgeNode

constexpr Icon EdgeService = {"\xee\xaf\x99"};
namespace Edit {
constexpr Icon Unnamed = {"\xee\xaf\x9a"};
constexpr Icon Off = {"\xee\xaf\x9b"};
}  // namespace Edit

constexpr Icon EdtLoop = {"\xee\xaf\x9c"};
constexpr Icon Education = {"\xee\xaf\x9d"};
namespace Email {
constexpr Icon Unnamed = {"\xee\xaf\x9e"};
constexpr Icon New = {"\xee\xaf\x9f"};
}  // namespace Email

constexpr Icon EmissionsManagement = {"\xee\xaf\xa0"};
constexpr Icon Encryption = {"\xee\xaf\xa1"};
namespace Energy {
constexpr Icon Renewable = {"\xee\xaf\xa2"};
}

constexpr Icon Enterprise = {"\xee\xaf\xa3"};
namespace Enumeration {
constexpr Icon Definition = {"\xee\xaf\xa4"};
constexpr Icon Usage = {"\xee\xaf\xa5"};
}  // namespace Enumeration

namespace Equal {
constexpr Icon Approximately = {"\xee\xaf\xa6"};
}

constexpr Icon Equalizer = {"\xee\xaf\xa7"};
constexpr Icon Erase = {"\xee\xaf\xa8"};
namespace Error {
constexpr Icon Unnamed = {"\xee\xaf\xa9"};
constexpr Icon Filled = {"\xee\xaf\xaa"};
constexpr Icon Outline = {"\xee\xaf\xab"};
}  // namespace Error

namespace Event {
constexpr Icon Unnamed = {"\xee\xaf\xac"};
constexpr Icon Change = {"\xee\xaf\xad"};
constexpr Icon Incident = {"\xee\xaf\xae"};
constexpr Icon Schedule = {"\xee\xaf\xb1"};
constexpr Icon Warning = {"\xee\xaf\xb2"};
}  // namespace Event

namespace Events {
constexpr Icon Unnamed = {"\xee\xaf\xaf"};
constexpr Icon Alt = {"\xee\xaf\xb0"};
}  // namespace Events

constexpr Icon ExamMode = {"\xee\xaf\xb3"};
constexpr Icon ExecutableProgram = {"\xee\xaf\xb4"};
constexpr Icon Exit = {"\xee\xaf\xb5"};
constexpr Icon ExpandAll = {"\xee\xaf\xb6"};
constexpr Icon ExpandCategories = {"\xee\xaf\xb7"};
constexpr Icon Explore = {"\xee\xaf\xb8"};
constexpr Icon Export = {"\xee\xaf\xb9"};
constexpr Icon Eyedropper = {"\xee\xaf\xba"};
namespace Face {
namespace Activated {
constexpr Icon Unnamed = {"\xee\xaf\xbb"};
constexpr Icon Add = {"\xee\xaf\xbc"};
constexpr Icon Filled = {"\xee\xaf\xbd"};
}  // namespace Activated

constexpr Icon Add = {"\xee\xaf\xbe"};
constexpr Icon Cool = {"\xee\xaf\xbf"};
namespace Dissatisfied {
constexpr Icon Unnamed = {"\xee\xb0\x80"};
constexpr Icon Filled = {"\xee\xb0\x81"};
}  // namespace Dissatisfied

namespace Dizzy {
constexpr Icon Unnamed = {"\xee\xb0\x82"};
constexpr Icon Filled = {"\xee\xb0\x83"};
}  // namespace Dizzy

constexpr Icon Mask = {"\xee\xb0\x84"};
namespace Neutral {
constexpr Icon Unnamed = {"\xee\xb0\x85"};
constexpr Icon Filled = {"\xee\xb0\x86"};
}  // namespace Neutral

namespace Pending {
constexpr Icon Unnamed = {"\xee\xb0\x87"};
constexpr Icon Filled = {"\xee\xb0\x88"};
}  // namespace Pending

namespace Satisfied {
constexpr Icon Unnamed = {"\xee\xb0\x89"};
constexpr Icon Filled = {"\xee\xb0\x8a"};
}  // namespace Satisfied

namespace Wink {
constexpr Icon Unnamed = {"\xee\xb0\x8b"};
constexpr Icon Filled = {"\xee\xb0\x8c"};
}  // namespace Wink

}  // namespace Face

constexpr Icon Factor = {"\xee\xb0\x8d"};
constexpr Icon Fade = {"\xee\xb0\x8e"};
namespace Favorite {
constexpr Icon Unnamed = {"\xee\xb0\x8f"};
constexpr Icon Filled = {"\xee\xb0\x90"};
constexpr Icon Half = {"\xee\xb0\x91"};
}  // namespace Favorite

namespace FeatureMembership {
constexpr Icon Unnamed = {"\xee\xb0\x92"};
constexpr Icon Filled = {"\xee\xb0\x93"};
}  // namespace FeatureMembership

constexpr Icon FeatureTyping = {"\xee\xb0\x94"};
namespace FetchUpload {
constexpr Icon Unnamed = {"\xee\xb0\x95"};
constexpr Icon Cloud = {"\xee\xb0\x96"};
}  // namespace FetchUpload

constexpr Icon FileStorage = {"\xee\xb0\x97"};
namespace Filter {
constexpr Icon Unnamed = {"\xee\xb0\x98"};
constexpr Icon Edit = {"\xee\xb0\x99"};
constexpr Icon Remove = {"\xee\xb0\x9a"};
constexpr Icon Reset = {"\xee\xb0\x9b"};
}  // namespace Filter

constexpr Icon Finance = {"\xee\xb0\x9c"};
constexpr Icon FinancialAssets = {"\xee\xb0\x9d"};
constexpr Icon FingerprintRecognition = {"\xee\xb0\x9e"};
constexpr Icon Fire = {"\xee\xb0\x9f"};
namespace Firewall {
constexpr Icon Unnamed = {"\xee\xb0\xa0"};
constexpr Icon Classic = {"\xee\xb0\xa1"};
}  // namespace Firewall

namespace Fish {
constexpr Icon Unnamed = {"\xee\xb0\xa2"};
constexpr Icon Multiple = {"\xee\xb0\xa3"};
}  // namespace Fish

constexpr Icon FitToHeight = {"\xee\xb0\xa4"};
constexpr Icon FitToScreen = {"\xee\xb0\xa5"};
constexpr Icon FitToWidth = {"\xee\xb0\xa6"};
namespace Flag {
constexpr Icon Unnamed = {"\xee\xb0\xa7"};
constexpr Icon Filled = {"\xee\xb0\xa8"};
}  // namespace Flag

constexpr Icon FlaggingTaxi = {"\xee\xb0\xa9"};
namespace Flash {
constexpr Icon Unnamed = {"\xee\xb0\xaa"};
constexpr Icon Filled = {"\xee\xb0\xab"};
namespace Off {
constexpr Icon Unnamed = {"\xee\xb0\xac"};
constexpr Icon Filled = {"\xee\xb0\xad"};
}  // namespace Off

}  // namespace Flash

namespace Flight {
constexpr Icon International = {"\xee\xb0\xae"};
constexpr Icon Roster = {"\xee\xb0\xaf"};
constexpr Icon Schedule = {"\xee\xb0\xb0"};
}  // namespace Flight

constexpr Icon FloatingIp = {"\xee\xb0\xb1"};
namespace Flood {
constexpr Icon Unnamed = {"\xee\xb0\xb2"};
constexpr Icon Warning = {"\xee\xb0\xb3"};
}  // namespace Flood

constexpr Icon Floorplan = {"\xee\xb0\xb4"};
namespace Flow {
constexpr Icon Unnamed = {"\xee\xb0\xb5"};
constexpr Icon Connection = {"\xee\xb0\xb6"};
constexpr Icon Data = {"\xee\xb0\xb7"};
namespace Modeler {
constexpr Icon Unnamed = {"\xee\xb0\xb9"};
constexpr Icon Reference = {"\xee\xb0\xba"};
}  // namespace Modeler

constexpr Icon StreamPath1 = {"\xee\xb0\xbb"};
constexpr Icon StreamPath2 = {"\xee\xb0\xbc"};
constexpr Icon StreamPath3 = {"\xee\xb0\xbd"};
namespace Stream {
constexpr Icon ReferencePath1 = {"\xee\xb0\xbe"};
constexpr Icon ReferencePath2 = {"\xee\xb0\xbf"};
constexpr Icon ReferencePath3 = {"\xee\xb1\x80"};
constexpr Icon ReferencePath4 = {"\xee\xb1\x81"};
constexpr Icon ReferencePath5 = {"\xee\xb1\x82"};
}  // namespace Stream

}  // namespace Flow

constexpr Icon FlowLogsVpc = {"\xee\xb0\xb8"};
constexpr Icon Fog = {"\xee\xb1\x83"};
namespace Folder {
constexpr Icon Unnamed = {"\xee\xb1\x84"};
constexpr Icon Add = {"\xee\xb1\x85"};
namespace Details {
constexpr Icon Unnamed = {"\xee\xb1\x86"};
constexpr Icon Reference = {"\xee\xb1\x87"};
}  // namespace Details

constexpr Icon MoveTo = {"\xee\xb1\x88"};
constexpr Icon Off = {"\xee\xb1\x89"};
constexpr Icon Open = {"\xee\xb1\x8a"};
constexpr Icon Parent = {"\xee\xb1\x8b"};
constexpr Icon Shared = {"\xee\xb1\x8d"};
}  // namespace Folder

constexpr Icon Folders = {"\xee\xb1\x8c"};
namespace Forecast {
constexpr Icon Hail = {"\xee\xb1\x8e"};
constexpr Icon Hail30 = {"\xee\xb1\x8f"};
constexpr Icon Lightning = {"\xee\xb1\x90"};
constexpr Icon Lightning30 = {"\xee\xb1\x91"};
}  // namespace Forecast

constexpr Icon Fork = {"\xee\xb1\x92"};
constexpr Icon ForkNode = {"\xee\xb1\x93"};
constexpr Icon Forum = {"\xee\xb1\x94"};
namespace Forward {
constexpr Icon _5 = {"\xee\xb1\x95"};
constexpr Icon _10 = {"\xee\xb1\x96"};
constexpr Icon _30 = {"\xee\xb1\x97"};
}  // namespace Forward

constexpr Icon Fragile = {"\xee\xb1\x98"};
constexpr Icon Fragments = {"\xee\xb1\x99"};
constexpr Icon Friendship = {"\xee\xb1\x9a"};
constexpr Icon FruitBowl = {"\xee\xb1\x9b"};
namespace Function {
constexpr Icon Unnamed = {"\xee\xb1\x9c"};
constexpr Icon _2 = {"\xee\xb1\x9d"};
}  // namespace Function

constexpr Icon FunctionMathPath1 = {"\xee\xb1\x9e"};
constexpr Icon FunctionMathPath2 = {"\xee\xb1\x9f"};
namespace Game {
constexpr Icon Console = {"\xee\xb1\xa0"};
constexpr Icon Wireless = {"\xee\xb1\xa1"};
}  // namespace Game

constexpr Icon Gamification = {"\xee\xb1\xa2"};
namespace GasStation {
constexpr Icon Unnamed = {"\xee\xb1\xa3"};
constexpr Icon Filled = {"\xee\xb1\xa4"};
}  // namespace GasStation

namespace Gateway {
constexpr Icon Unnamed = {"\xee\xb1\xa5"};
constexpr Icon Api = {"\xee\xb1\xa6"};
constexpr Icon Mail = {"\xee\xb1\xa7"};
constexpr Icon Public = {"\xee\xb1\xa8"};
constexpr Icon Security = {"\xee\xb1\xa9"};
constexpr Icon UserAccess = {"\xee\xb1\xaa"};
constexpr Icon Vpn = {"\xee\xb1\xab"};
}  // namespace Gateway

constexpr Icon Gears = {"\xee\xb1\xac"};
namespace Gem {
constexpr Icon Unnamed = {"\xee\xb1\xad"};
constexpr Icon Reference = {"\xee\xb1\xae"};
}  // namespace Gem

namespace Gender {
constexpr Icon Female = {"\xee\xb1\xaf"};
constexpr Icon Male = {"\xee\xb1\xb0"};
}  // namespace Gender

constexpr Icon GeneratePdf = {"\xee\xb1\xb1"};
constexpr Icon Gif = {"\xee\xb1\xb2"};
constexpr Icon Gift = {"\xee\xb1\xb3"};
constexpr Icon GlobalLoanAndTrial = {"\xee\xb1\xb4"};
constexpr Icon Globe = {"\xee\xb1\xb5"};
constexpr Icon Gradient = {"\xee\xb1\xb6"};
constexpr Icon GraphicalDataFlow = {"\xee\xb1\xb7"};
constexpr Icon Grid = {"\xee\xb1\xb8"};
namespace Group {
constexpr Icon Unnamed = {"\xee\xb1\xb9"};
constexpr Icon Access = {"\xee\xb1\xba"};
constexpr Icon Account = {"\xee\xb1\xbb"};
constexpr Icon Presentation = {"\xee\xb1\xbf"};
constexpr Icon Resource = {"\xee\xb2\x80"};
constexpr Icon Security = {"\xee\xb2\x81"};
}  // namespace Group

namespace GroupObjects {
constexpr Icon Unnamed = {"\xee\xb1\xbc"};
constexpr Icon New = {"\xee\xb1\xbd"};
constexpr Icon Save = {"\xee\xb1\xbe"};
}  // namespace GroupObjects

constexpr Icon Growth = {"\xee\xb2\x82"};
namespace Gui {
constexpr Icon Unnamed = {"\xee\xb2\x83"};
constexpr Icon Management = {"\xee\xb2\x84"};
}  // namespace Gui

constexpr Icon Hail = {"\xee\xb2\x85"};
constexpr Icon Harbor = {"\xee\xb2\x86"};
constexpr Icon HardwareSecurityModule = {"\xee\xb2\x87"};
constexpr Icon Hashtag = {"\xee\xb2\x88"};
namespace Haze {
constexpr Icon Unnamed = {"\xee\xb2\x89"};
constexpr Icon Night = {"\xee\xb2\x8a"};
}  // namespace Haze

namespace Hd {
constexpr Icon Unnamed = {"\xee\xb2\x8b"};
constexpr Icon Filled = {"\xee\xb2\x8c"};
}  // namespace Hd

constexpr Icon Hdr = {"\xee\xb2\x8d"};
constexpr Icon Headphones = {"\xee\xb2\x8e"};
constexpr Icon Headset = {"\xee\xb2\x8f"};
constexpr Icon HealthCross = {"\xee\xb2\x90"};
constexpr Icon Hearing = {"\xee\xb2\x91"};
namespace HeatMap {
constexpr Icon Unnamed = {"\xee\xb2\x92"};
constexpr Icon _02 = {"\xee\xb2\x93"};
constexpr Icon _03 = {"\xee\xb2\x94"};
constexpr Icon Stocks = {"\xee\xb2\x95"};
}  // namespace HeatMap

constexpr Icon Helicopter = {"\xee\xb2\x96"};
namespace Help {
constexpr Icon Unnamed = {"\xee\xb2\x97"};
constexpr Icon Filled = {"\xee\xb2\x99"};
}  // namespace Help

constexpr Icon HelpDesk = {"\xee\xb2\x98"};
namespace Hexagon {
constexpr Icon Outline = {"\xee\xb2\x9a"};
constexpr Icon Solid = {"\xee\xb2\x9b"};
namespace Vertical {
constexpr Icon Outline = {"\xee\xb2\x9c"};
constexpr Icon Solid = {"\xee\xb2\x9d"};
}  // namespace Vertical

}  // namespace Hexagon

constexpr Icon Home = {"\xee\xb2\x9e"};
constexpr Icon HorizontalView = {"\xee\xb2\x9f"};
constexpr Icon Hospital = {"\xee\xb2\xa0"};
constexpr Icon HospitalBed = {"\xee\xb2\xa1"};
constexpr Icon Hotel = {"\xee\xb2\xa2"};
constexpr Icon Hourglass = {"\xee\xb2\xa3"};
namespace Html {
constexpr Icon Unnamed = {"\xee\xb2\xa4"};
constexpr Icon Reference = {"\xee\xb2\xa5"};
}  // namespace Html

constexpr Icon Http = {"\xee\xb2\xa6"};
namespace Humidity {
constexpr Icon Unnamed = {"\xee\xb2\xa7"};
constexpr Icon Alt = {"\xee\xb2\xa8"};
}  // namespace Humidity

constexpr Icon Hurricane = {"\xee\xb2\xa9"};
namespace HybridNetworking {
constexpr Icon Unnamed = {"\xee\xb2\xaa"};
constexpr Icon Alt = {"\xee\xb2\xab"};
}  // namespace HybridNetworking

namespace Ibm {
constexpr Icon AiOnZ = {"\xee\xb2\xac"};
constexpr Icon AiopsInsights = {"\xee\xb2\xad"};
constexpr Icon ApiConnect = {"\xee\xb2\xae"};
constexpr Icon AppConnectEnterprise = {"\xee\xb2\xaf"};
constexpr Icon ApplicationAndDiscoveryDeliveryIntelligence = {"\xee\xb2\xb0"};
constexpr Icon Aspera = {"\xee\xb2\xb1"};
constexpr Icon Bluepay = {"\xee\xb2\xb2"};
constexpr Icon Cloudant = {"\xee\xb2\xb4"};
constexpr Icon ContentServices = {"\xee\xb3\xb9"};
constexpr Icon Databand = {"\xee\xb3\xba"};
constexpr Icon DataPower = {"\xee\xb3\xbb"};
constexpr Icon DataProductExchange = {"\xee\xb3\xbc"};
constexpr Icon DataReplication = {"\xee\xb3\xbd"};
constexpr Icon Datastage = {"\xee\xb3\xbe"};
namespace Db2 {
constexpr Icon Unnamed = {"\xee\xb3\xbf"};
constexpr Icon Alt = {"\xee\xb4\x80"};
}  // namespace Db2

constexpr Icon Db2Warehouse = {"\xee\xb4\x81"};
constexpr Icon DeployableArchitecture = {"\xee\xb4\x82"};
constexpr Icon DynamicRouteServer = {"\xee\xb4\x84"};
namespace Elo {
constexpr Icon AutomotiveCompliance = {"\xee\xb4\x85"};
constexpr Icon EngineeringInsights = {"\xee\xb4\x86"};
constexpr Icon MethodComposer = {"\xee\xb4\x87"};
constexpr Icon Publishing = {"\xee\xb4\x88"};
}  // namespace Elo

constexpr Icon EngineeringLifecycleMgmt = {"\xee\xb4\x89"};
constexpr Icon EngineeringRequirementsDoorsNext = {"\xee\xb4\x8a"};
constexpr Icon EngineeringSystemsDesignRhapsody = {"\xee\xb4\x8b"};
constexpr Icon EngineeringSystemsDesignRhapsodyModelManager = {"\xee\xb4\x8c"};
constexpr Icon EngineeringSystemsDesignRhapsodySn1 = {"\xee\xb4\x8d"};
constexpr Icon EngineeringSystemsDesignRhapsodySn2 = {"\xee\xb4\x8e"};
constexpr Icon EngineeringTestMgmt = {"\xee\xb4\x8f"};
constexpr Icon EngineeringWorkflowMgmt = {"\xee\xb4\x90"};
constexpr Icon EventAutomation = {"\xee\xb4\x91"};
constexpr Icon EventEndpointMgmt = {"\xee\xb4\x92"};
constexpr Icon EventProcessing = {"\xee\xb4\x93"};
constexpr Icon EventStreams = {"\xee\xb4\x94"};
constexpr Icon Gcm = {"\xee\xb4\x95"};
constexpr Icon GlobalStorageArchitecture = {"\xee\xb4\x96"};
constexpr Icon Granite = {"\xee\xb4\x97"};
constexpr Icon Ibv = {"\xee\xb4\x98"};
constexpr Icon Instana = {"\xee\xb4\x99"};
constexpr Icon Jrs = {"\xee\xb4\x9a"};
constexpr Icon KnowledgeCatalog = {"\xee\xb4\x9b"};
constexpr Icon KnowledgeCatalogPremium = {"\xee\xb4\x9c"};
constexpr Icon KnowledgeCatalogStandard = {"\xee\xb4\x9d"};
constexpr Icon LaunchpadS4 = {"\xee\xb4\x9e"};
constexpr Icon Lpa = {"\xee\xb4\x9f"};
constexpr Icon Lqe = {"\xee\xb4\xa0"};
constexpr Icon MachineLearningForZos = {"\xee\xb4\xa1"};
constexpr Icon Match360 = {"\xee\xb4\xa2"};
constexpr Icon MaximoApplicationSuite = {"\xee\xb4\xa3"};
constexpr Icon Mq = {"\xee\xb4\xa4"};
constexpr Icon OpenEnterpriseLanguages = {"\xee\xb4\xa5"};
constexpr Icon OpenshiftContainerPlatformOnVpcForRegulatedIndustries = {"\xee\xb4\xa6"};
constexpr Icon PlanningAnalytics = {"\xee\xb4\xa7"};
constexpr Icon PowerVs = {"\xee\xb4\xa8"};
constexpr Icon PowerVsPrivateCloud = {"\xee\xb4\xa9"};
constexpr Icon PowerWithVpc = {"\xee\xb4\xaa"};
constexpr Icon PrivatePathServices = {"\xee\xb4\xab"};
constexpr Icon ProcessMining = {"\xee\xb4\xac"};
constexpr Icon SaasConsole = {"\xee\xb4\xb0"};
constexpr Icon SapOnPower = {"\xee\xb4\xb1"};
constexpr Icon SecureInfrastructureOnVpcForRegulatedIndustries = {"\xee\xb4\xb2"};
constexpr Icon Streamsets = {"\xee\xb4\xb5"};
constexpr Icon Telehealth = {"\xee\xb4\xb6"};
constexpr Icon Tenet = {"\xee\xb4\xb7"};
constexpr Icon TestAcceleratorForZ = {"\xee\xb4\xb8"};
constexpr Icon Toolchain = {"\xee\xb4\xb9"};
constexpr Icon Turbonomic = {"\xee\xb4\xba"};
constexpr Icon UnstructuredDataProcessor = {"\xee\xb4\xbb"};
constexpr Icon VpnForVpc = {"\xee\xb4\xbc"};
constexpr Icon VsiOnVpcForRegulatedIndustries = {"\xee\xb4\xbd"};
constexpr Icon WaziDeploy = {"\xee\xb5\x94"};
}  // namespace Ibm

namespace IbmCloud {
constexpr Icon Unnamed = {"\xee\xb2\xb3"};
constexpr Icon AppId = {"\xee\xb2\xb5"};
constexpr Icon BackupAndRecovery = {"\xee\xb2\xb6"};
constexpr Icon BackupServiceVpc = {"\xee\xb2\xb7"};
constexpr Icon BareMetalServer = {"\xee\xb2\xb8"};
constexpr Icon BareMetalServersVpc = {"\xee\xb2\xb9"};
constexpr Icon CitrixDaas = {"\xee\xb2\xba"};
constexpr Icon CodeEngine = {"\xee\xb2\xbb"};
constexpr Icon ContinuousDelivery = {"\xee\xb2\xbc"};
constexpr Icon Databases = {"\xee\xb2\xbd"};
constexpr Icon DedicatedHost = {"\xee\xb2\xbe"};
namespace DirectLink1 {
constexpr Icon Connect = {"\xee\xb2\xbf"};
constexpr Icon Dedicated = {"\xee\xb3\x80"};
constexpr Icon DedicatedHosting = {"\xee\xb3\x81"};
constexpr Icon Exchange = {"\xee\xb3\x82"};
}  // namespace DirectLink1

namespace DirectLink2 {
constexpr Icon Connect = {"\xee\xb3\x83"};
constexpr Icon Dedicated = {"\xee\xb3\x84"};
constexpr Icon DedicatedHosting = {"\xee\xb3\x85"};
}  // namespace DirectLink2

constexpr Icon EssentialSecurityAndObservabilityServices = {"\xee\xb3\x86"};
constexpr Icon EventNotification = {"\xee\xb3\x87"};
constexpr Icon EventStreams = {"\xee\xb3\x88"};
constexpr Icon ForEducation = {"\xee\xb3\x89"};
constexpr Icon GateKeeper = {"\xee\xb3\x8a"};
constexpr Icon Hpc = {"\xee\xb3\x8b"};
constexpr Icon Hsm = {"\xee\xb3\x8c"};
constexpr Icon HyperProtectCryptoServices = {"\xee\xb3\x8d"};
constexpr Icon HyperProtectDbaas = {"\xee\xb3\x8e"};
constexpr Icon HyperProtectVs = {"\xee\xb3\x8f"};
constexpr Icon InternetServices = {"\xee\xb3\x90"};
constexpr Icon IpsecVpn = {"\xee\xb3\x91"};
constexpr Icon KeyProtect = {"\xee\xb3\x92"};
constexpr Icon KubernetesService = {"\xee\xb3\x93"};
constexpr Icon Logging = {"\xee\xb3\x94"};
constexpr Icon MassDataMigration = {"\xee\xb3\x95"};
constexpr Icon Observability = {"\xee\xb3\x96"};
constexpr Icon Pal = {"\xee\xb3\xa2"};
constexpr Icon PrivilegedAccessGateway = {"\xee\xb3\xa3"};
constexpr Icon Projects = {"\xee\xb3\xa4"};
constexpr Icon Resiliency = {"\xee\xb3\xa5"};
constexpr Icon SecretsManager = {"\xee\xb3\xa6"};
constexpr Icon Security = {"\xee\xb3\xa7"};
constexpr Icon SecurityComplianceCenter = {"\xee\xb3\xa8"};
constexpr Icon SecurityComplianceCenterWorkloadProtection = {"\xee\xb3\xa9"};
constexpr Icon SecurityGroups = {"\xee\xb3\xaa"};
constexpr Icon Subnets = {"\xee\xb3\xab"};
constexpr Icon SysdigSecure = {"\xee\xb3\xac"};
constexpr Icon TransitGateway = {"\xee\xb3\xad"};
constexpr Icon VirtualServerClassic = {"\xee\xb3\xae"};
constexpr Icon VirtualServerVpc = {"\xee\xb3\xaf"};
constexpr Icon Vpc = {"\xee\xb3\xb0"};
constexpr Icon VpcBlockStorageSnapshots = {"\xee\xb3\xb1"};
constexpr Icon VpcClientVpn = {"\xee\xb3\xb2"};
constexpr Icon VpcEndpoints = {"\xee\xb3\xb3"};
constexpr Icon VpcFileStorage = {"\xee\xb3\xb4"};
constexpr Icon VpcImages = {"\xee\xb3\xb5"};
}  // namespace IbmCloud

namespace IbmCloudPak {
constexpr Icon Applications = {"\xee\xb3\x97"};
constexpr Icon BusinessAutomation = {"\xee\xb3\x98"};
constexpr Icon Data = {"\xee\xb3\x99"};
constexpr Icon Integration = {"\xee\xb3\x9a"};
constexpr Icon MantaAutomatedDataLineage = {"\xee\xb3\x9b"};
constexpr Icon MulticloudMgmt = {"\xee\xb3\x9c"};
constexpr Icon Netezza = {"\xee\xb3\x9d"};
constexpr Icon NetworkAutomation = {"\xee\xb3\x9e"};
constexpr Icon Security = {"\xee\xb3\x9f"};
constexpr Icon System = {"\xee\xb3\xa0"};
constexpr Icon WatsonAiops = {"\xee\xb3\xa1"};
}  // namespace IbmCloudPak

namespace IbmConsultingAdvantage {
constexpr Icon Agent = {"\xee\xb3\xb6"};
constexpr Icon Application = {"\xee\xb3\xb7"};
constexpr Icon Assistant = {"\xee\xb3\xb8"};
}  // namespace IbmConsultingAdvantage

namespace IbmDevops {
constexpr Icon Control = {"\xee\xb4\x83"};
}

namespace IbmQuantum {
constexpr Icon SafeAdvisor = {"\xee\xb4\xad"};
constexpr Icon SafeExplorer = {"\xee\xb4\xae"};
constexpr Icon SafeRemediator = {"\xee\xb4\xaf"};
}  // namespace IbmQuantum

namespace IbmSecurity {
constexpr Icon Unnamed = {"\xee\xb4\xb3"};
constexpr Icon Services = {"\xee\xb4\xb4"};
}  // namespace IbmSecurity

namespace IbmWatson {
constexpr Icon Assistant = {"\xee\xb4\xbe"};
constexpr Icon Discovery = {"\xee\xb4\xbf"};
constexpr Icon KnowledgeCatalog = {"\xee\xb5\x80"};
constexpr Icon KnowledgeStudio = {"\xee\xb5\x81"};
constexpr Icon LanguageTranslator = {"\xee\xb5\x82"};
constexpr Icon MachineLearning = {"\xee\xb5\x83"};
constexpr Icon NaturalLanguageClassifier = {"\xee\xb5\x84"};
constexpr Icon NaturalLanguageUnderstanding = {"\xee\xb5\x85"};
constexpr Icon Openscale = {"\xee\xb5\x86"};
constexpr Icon Orders = {"\xee\xb5\x87"};
constexpr Icon Query = {"\xee\xb5\x88"};
constexpr Icon SpeechToText = {"\xee\xb5\x89"};
constexpr Icon Studio = {"\xee\xb5\x8a"};
constexpr Icon TextToSpeech = {"\xee\xb5\x8b"};
constexpr Icon ToneAnalyzer = {"\xee\xb5\x8c"};
}  // namespace IbmWatson

namespace IbmWatsonx {
constexpr Icon Assistant = {"\xee\xb5\x8d"};
constexpr Icon CodeAssistant = {"\xee\xb5\x8e"};
constexpr Icon CodeAssistantForEnterpriseJavaApplications = {"\xee\xb5\x8f"};
namespace CodeAssistantForZ {
constexpr Icon Unnamed = {"\xee\xb5\x90"};
constexpr Icon Refactor = {"\xee\xb5\x91"};
}  // namespace CodeAssistantForZ

constexpr Icon CodeAssistantForZValidationAssistant = {"\xee\xb5\x92"};
constexpr Icon Orchestrate = {"\xee\xb5\x93"};
}  // namespace IbmWatsonx

namespace IbmZ {
constexpr Icon CloudModStack = {"\xee\xb5\x95"};
constexpr Icon EnvironmentsDevSecOps = {"\xee\xb5\x97"};
constexpr Icon OpenEditor = {"\xee\xb5\x98"};
constexpr Icon ProcessorCapacityReference = {"\xee\xb5\x9d"};
}  // namespace IbmZ

namespace IbmZCloud {
constexpr Icon Provisioning = {"\xee\xb5\x96"};
}

namespace IbmZOs {
constexpr Icon Unnamed = {"\xee\xb5\x99"};
constexpr Icon AiControlInterface = {"\xee\xb5\x9a"};
constexpr Icon Containers = {"\xee\xb5\x9b"};
constexpr Icon PackageManager = {"\xee\xb5\x9c"};
}  // namespace IbmZOs

namespace Ice {
constexpr Icon Accretion = {"\xee\xb5\x9e"};
constexpr Icon Vision = {"\xee\xb5\x9f"};
}  // namespace Ice

constexpr Icon Idea = {"\xee\xb5\xa0"};
constexpr Icon Identification = {"\xee\xb5\xa1"};
constexpr Icon IdManagement = {"\xee\xb5\xa2"};
namespace Image {
constexpr Icon Unnamed = {"\xee\xb5\xa3"};
constexpr Icon Copy = {"\xee\xb5\xa4"};
constexpr Icon Medical = {"\xee\xb5\xa5"};
constexpr Icon Reference = {"\xee\xb5\xa6"};
namespace Search {
constexpr Icon Unnamed = {"\xee\xb5\xa7"};
constexpr Icon Alt = {"\xee\xb5\xa8"};
}  // namespace Search

}  // namespace Image

constexpr Icon ImageService = {"\xee\xb5\xa9"};
namespace ImageStore {
constexpr Icon Local = {"\xee\xb5\xaa"};
}

constexpr Icon ImportExport = {"\xee\xb5\xab"};
constexpr Icon ImproveRelevance = {"\xee\xb5\xac"};
namespace Incomplete {
constexpr Icon Unnamed = {"\xee\xb5\xad"};
constexpr Icon Cancel = {"\xee\xb5\xae"};
constexpr Icon Error = {"\xee\xb5\xaf"};
constexpr Icon Warning = {"\xee\xb5\xb0"};
}  // namespace Incomplete

constexpr Icon IncreaseLevel = {"\xee\xb5\xb1"};
constexpr Icon Industry = {"\xee\xb5\xb2"};
constexpr Icon InfinitySymbol = {"\xee\xb5\xb3"};
namespace Information {
constexpr Icon Unnamed = {"\xee\xb5\xb4"};
constexpr Icon Disabled = {"\xee\xb5\xb5"};
constexpr Icon Filled = {"\xee\xb5\xb6"};
namespace Square {
constexpr Icon Unnamed = {"\xee\xb5\xb7"};
constexpr Icon Filled = {"\xee\xb5\xb8"};
}  // namespace Square

}  // namespace Information

namespace Infrastructure {
constexpr Icon Classic = {"\xee\xb5\xb9"};
}

namespace InProgress {
constexpr Icon Unnamed = {"\xee\xb5\xba"};
constexpr Icon Error = {"\xee\xb5\xbb"};
constexpr Icon Warning = {"\xee\xb5\xbc"};
}  // namespace InProgress

namespace Insert {
constexpr Icon Unnamed = {"\xee\xb5\xbd"};
constexpr Icon Page = {"\xee\xb5\xbe"};
}  // namespace Insert

constexpr Icon InsertSyntax = {"\xee\xb5\xbf"};
constexpr Icon Inspection = {"\xee\xb6\x80"};
namespace Instance {
constexpr Icon Bx = {"\xee\xb6\x81"};
constexpr Icon Classic = {"\xee\xb6\x82"};
constexpr Icon Cx = {"\xee\xb6\x83"};
constexpr Icon Mx = {"\xee\xb6\x84"};
constexpr Icon Virtual = {"\xee\xb6\x85"};
}  // namespace Instance

constexpr Icon Integration = {"\xee\xb6\x86"};
namespace IntentRequest {
constexpr Icon Active = {"\xee\xb6\x87"};
constexpr Icon Create = {"\xee\xb6\x88"};
constexpr Icon Heal = {"\xee\xb6\x89"};
constexpr Icon Inactive = {"\xee\xb6\x8a"};
constexpr Icon ScaleIn = {"\xee\xb6\x8b"};
constexpr Icon ScaleOut = {"\xee\xb6\x8c"};
constexpr Icon Uninstall = {"\xee\xb6\x8d"};
constexpr Icon Upgrade = {"\xee\xb6\x8e"};
}  // namespace IntentRequest

constexpr Icon Interactions = {"\xee\xb6\x8f"};
namespace Interface {
constexpr Icon Usage = {"\xee\xb6\x90"};
}

constexpr Icon Intersect = {"\xee\xb6\x91"};
constexpr Icon IntrusionPrevention = {"\xee\xb6\x92"};
constexpr Icon InventoryManagement = {"\xee\xb6\x93"};
namespace Iot {
constexpr Icon Connect = {"\xee\xb6\x94"};
constexpr Icon Platform = {"\xee\xb6\x95"};
}  // namespace Iot

constexpr Icon Ip = {"\xee\xb6\x96"};
namespace Iso {
constexpr Icon Unnamed = {"\xee\xb6\x97"};
constexpr Icon Filled = {"\xee\xb6\x98"};
constexpr Icon Outline = {"\xee\xb6\x99"};
}  // namespace Iso

namespace Job {
constexpr Icon Daemon = {"\xee\xb6\x9a"};
constexpr Icon Run = {"\xee\xb6\x9b"};
}  // namespace Job

namespace Join {
constexpr Icon Full = {"\xee\xb6\x9c"};
constexpr Icon Inner = {"\xee\xb6\x9d"};
constexpr Icon Left = {"\xee\xb6\x9e"};
constexpr Icon Outer = {"\xee\xb6\xa0"};
constexpr Icon Right = {"\xee\xb6\xa1"};
}  // namespace Join

constexpr Icon JoinNode = {"\xee\xb6\x9f"};
constexpr Icon Jpg = {"\xee\xb6\xa2"};
constexpr Icon JsError = {"\xee\xb6\xa3"};
namespace Json {
constexpr Icon Unnamed = {"\xee\xb6\xa4"};
constexpr Icon Reference = {"\xee\xb6\xa5"};
}  // namespace Json

constexpr Icon JumpLink = {"\xee\xb6\xa6"};
constexpr Icon KeepDry = {"\xee\xb6\xa7"};
constexpr Icon Key = {"\xee\xb6\xa8"};
namespace Keyboard {
constexpr Icon Unnamed = {"\xee\xb6\xa9"};
constexpr Icon Off = {"\xee\xb6\xaa"};
}  // namespace Keyboard

constexpr Icon KioskDevice = {"\xee\xb6\xab"};
constexpr Icon Kubelet = {"\xee\xb6\xac"};
namespace Kubernetes {
constexpr Icon Unnamed = {"\xee\xb6\xad"};
constexpr Icon ControlPlaneNode = {"\xee\xb6\xae"};
constexpr Icon IpAddress = {"\xee\xb6\xaf"};
constexpr Icon Operator = {"\xee\xb6\xb0"};
constexpr Icon Pod = {"\xee\xb6\xb1"};
constexpr Icon WorkerNode = {"\xee\xb6\xb2"};
}  // namespace Kubernetes

constexpr Icon Label = {"\xee\xb6\xb3"};
constexpr Icon Language = {"\xee\xb6\xb4"};
constexpr Icon Laptop = {"\xee\xb6\xb5"};
namespace Lasso {
constexpr Icon Unnamed = {"\xee\xb6\xb6"};
constexpr Icon Polygon = {"\xee\xb6\xb7"};
}  // namespace Lasso

constexpr Icon Launch = {"\xee\xb6\xb8"};
namespace Layers {
constexpr Icon Unnamed = {"\xee\xb6\xb9"};
constexpr Icon External = {"\xee\xb6\xba"};
}  // namespace Layers

constexpr Icon Legend = {"\xee\xb6\xbb"};
namespace Letter {
constexpr Icon Aa = {"\xee\xb6\xbc"};
constexpr Icon Bb = {"\xee\xb6\xbd"};
constexpr Icon Cc = {"\xee\xb6\xbe"};
constexpr Icon Dd = {"\xee\xb6\xbf"};
constexpr Icon Ee = {"\xee\xb7\x80"};
constexpr Icon Ff = {"\xee\xb7\x81"};
constexpr Icon Gg = {"\xee\xb7\x82"};
constexpr Icon Hh = {"\xee\xb7\x83"};
constexpr Icon Ii = {"\xee\xb7\x84"};
constexpr Icon Jj = {"\xee\xb7\x85"};
constexpr Icon Kk = {"\xee\xb7\x86"};
constexpr Icon Ll = {"\xee\xb7\x87"};
constexpr Icon Mm = {"\xee\xb7\x88"};
constexpr Icon Nn = {"\xee\xb7\x89"};
constexpr Icon Oo = {"\xee\xb7\x8a"};
constexpr Icon Pp = {"\xee\xb7\x8b"};
constexpr Icon Qq = {"\xee\xb7\x8c"};
constexpr Icon Rr = {"\xee\xb7\x8d"};
constexpr Icon Ss = {"\xee\xb7\x8e"};
constexpr Icon Tt = {"\xee\xb7\x8f"};
constexpr Icon Uu = {"\xee\xb7\x90"};
constexpr Icon Vv = {"\xee\xb7\x91"};
constexpr Icon Ww = {"\xee\xb7\x92"};
constexpr Icon Xx = {"\xee\xb7\x93"};
constexpr Icon Yy = {"\xee\xb7\x94"};
constexpr Icon Zz = {"\xee\xb7\x95"};
}  // namespace Letter

namespace License {
constexpr Icon Unnamed = {"\xee\xb7\x96"};
constexpr Icon Draft = {"\xee\xb7\x97"};
constexpr Icon Global = {"\xee\xb7\x98"};
constexpr Icon Maintenance = {"\xee\xb7\x99"};
constexpr Icon MaintenanceDraft = {"\xee\xb7\x9a"};
constexpr Icon ThirdParty = {"\xee\xb7\x9b"};
constexpr Icon ThirdPartyDraft = {"\xee\xb7\x9c"};
}  // namespace License

constexpr Icon Lifesaver = {"\xee\xb7\x9d"};
namespace Light {
constexpr Icon Unnamed = {"\xee\xb7\x9e"};
constexpr Icon Filled = {"\xee\xb7\x9f"};
}  // namespace Light

constexpr Icon Lightning = {"\xee\xb7\xa0"};
constexpr Icon Link = {"\xee\xb7\xa1"};
namespace Linux {
constexpr Icon Unnamed = {"\xee\xb7\xa2"};
constexpr Icon Alt = {"\xee\xb7\xa3"};
constexpr Icon Namespace = {"\xee\xb7\xa4"};
}  // namespace Linux

namespace List {
constexpr Icon Unnamed = {"\xee\xb7\xa5"};
constexpr Icon Boxes = {"\xee\xb7\xa6"};
constexpr Icon Bulleted = {"\xee\xb7\xa7"};
namespace Checked {
constexpr Icon Unnamed = {"\xee\xb7\xa8"};
constexpr Icon Mirror = {"\xee\xb7\xa9"};
}  // namespace Checked

constexpr Icon Dropdown = {"\xee\xb7\xaa"};
namespace Numbered {
constexpr Icon Unnamed = {"\xee\xb7\xab"};
constexpr Icon Mirror = {"\xee\xb7\xac"};
}  // namespace Numbered

}  // namespace List

namespace LoadBalancer {
constexpr Icon Application = {"\xee\xb7\xad"};
constexpr Icon Classic = {"\xee\xb7\xae"};
constexpr Icon Global = {"\xee\xb7\xaf"};
constexpr Icon Listener = {"\xee\xb7\xb0"};
constexpr Icon Local = {"\xee\xb7\xb1"};
constexpr Icon Network = {"\xee\xb7\xb2"};
constexpr Icon Pool = {"\xee\xb7\xb3"};
constexpr Icon Vpc = {"\xee\xb7\xb4"};
}  // namespace LoadBalancer

namespace Location {
constexpr Icon Unnamed = {"\xee\xb7\xb5"};
namespace Company {
constexpr Icon Unnamed = {"\xee\xb7\xb6"};
constexpr Icon Filled = {"\xee\xb7\xb7"};
}  // namespace Company

constexpr Icon Current = {"\xee\xb7\xb8"};
constexpr Icon Filled = {"\xee\xb7\xb9"};
namespace Hazard {
constexpr Icon Unnamed = {"\xee\xb7\xba"};
constexpr Icon Filled = {"\xee\xb7\xbb"};
}  // namespace Hazard

namespace Heart {
constexpr Icon Unnamed = {"\xee\xb7\xbc"};
constexpr Icon Filled = {"\xee\xb7\xbd"};
}  // namespace Heart

namespace Info {
constexpr Icon Unnamed = {"\xee\xb7\xbe"};
constexpr Icon Filled = {"\xee\xb7\xbf"};
}  // namespace Info

namespace Person {
constexpr Icon Unnamed = {"\xee\xb8\x80"};
constexpr Icon Filled = {"\xee\xb8\x81"};
}  // namespace Person

constexpr Icon Save = {"\xee\xb8\x82"};
namespace Star {
constexpr Icon Unnamed = {"\xee\xb8\x83"};
constexpr Icon Filled = {"\xee\xb8\x84"};
}  // namespace Star

}  // namespace Location

constexpr Icon Locked = {"\xee\xb8\x85"};
constexpr Icon LogicalPartition = {"\xee\xb8\x86"};
constexpr Icon Login = {"\xee\xb8\x87"};
namespace Logo {
constexpr Icon Angular = {"\xee\xb8\x88"};
constexpr Icon AnsibleCommunity = {"\xee\xb8\x89"};
constexpr Icon Digg = {"\xee\xb8\x8a"};
constexpr Icon Discord = {"\xee\xb8\x8b"};
constexpr Icon Facebook = {"\xee\xb8\x8c"};
constexpr Icon Figma = {"\xee\xb8\x8d"};
constexpr Icon Flickr = {"\xee\xb8\x8e"};
constexpr Icon Git = {"\xee\xb8\x8f"};
constexpr Icon Github = {"\xee\xb8\x90"};
constexpr Icon Gitlab = {"\xee\xb8\x91"};
constexpr Icon Glassdoor = {"\xee\xb8\x92"};
constexpr Icon Instagram = {"\xee\xb8\x93"};
constexpr Icon Invision = {"\xee\xb8\x94"};
constexpr Icon Jupyter = {"\xee\xb8\x95"};
constexpr Icon Keybase = {"\xee\xb8\x96"};
constexpr Icon Kubernetes = {"\xee\xb8\x97"};
constexpr Icon Linkedin = {"\xee\xb8\x98"};
constexpr Icon Livestream = {"\xee\xb8\x99"};
constexpr Icon Mastodon = {"\xee\xb8\x9a"};
constexpr Icon Medium = {"\xee\xb8\x9b"};
constexpr Icon Npm = {"\xee\xb8\x9c"};
constexpr Icon Openshift = {"\xee\xb8\x9d"};
constexpr Icon Pinterest = {"\xee\xb8\x9e"};
constexpr Icon Python = {"\xee\xb8\x9f"};
constexpr Icon Quora = {"\xee\xb8\xa0"};
constexpr Icon React = {"\xee\xb8\xa1"};
constexpr Icon RedHatAiInstructlabOnIbmCloud = {"\xee\xb8\xa2"};
constexpr Icon RedHatAnsible = {"\xee\xb8\xa3"};
constexpr Icon RScript = {"\xee\xb8\xa4"};
constexpr Icon Sketch = {"\xee\xb8\xa5"};
constexpr Icon Skype = {"\xee\xb8\xa6"};
constexpr Icon Slack = {"\xee\xb8\xa7"};
constexpr Icon Snapchat = {"\xee\xb8\xa8"};
constexpr Icon Svelte = {"\xee\xb8\xa9"};
constexpr Icon Tumblr = {"\xee\xb8\xaa"};
constexpr Icon Twitter = {"\xee\xb8\xab"};
namespace Vmware {
constexpr Icon Unnamed = {"\xee\xb8\xad"};
constexpr Icon Alt = {"\xee\xb8\xae"};
}  // namespace Vmware

constexpr Icon Vue = {"\xee\xb8\xaf"};
constexpr Icon Wechat = {"\xee\xb8\xb0"};
constexpr Icon X = {"\xee\xb8\xb1"};
constexpr Icon Xing = {"\xee\xb8\xb2"};
constexpr Icon Yelp = {"\xee\xb8\xb3"};
constexpr Icon Youtube = {"\xee\xb8\xb4"};
}  // namespace Logo

constexpr Icon Logout = {"\xee\xb8\xac"};
constexpr Icon Loop = {"\xee\xb8\xb5"};
namespace Mac {
constexpr Icon Unnamed = {"\xee\xb8\xb6"};
constexpr Icon Command = {"\xee\xb8\xb7"};
constexpr Icon Option = {"\xee\xb8\xba"};
constexpr Icon Shift = {"\xee\xb8\xbb"};
}  // namespace Mac

constexpr Icon MachineLearning = {"\xee\xb8\xb8"};
constexpr Icon MachineLearningModel = {"\xee\xb8\xb9"};
namespace MagicWand {
constexpr Icon Unnamed = {"\xee\xb8\xbc"};
constexpr Icon Filled = {"\xee\xb8\xbd"};
}  // namespace MagicWand

namespace Mail {
constexpr Icon All = {"\xee\xb8\xbe"};
constexpr Icon Reply = {"\xee\xb8\xbf"};
}  // namespace Mail

constexpr Icon ManagedSolutions = {"\xee\xb9\x80"};
constexpr Icon ManageProtection = {"\xee\xb9\x81"};
namespace Map {
constexpr Icon Unnamed = {"\xee\xb9\x82"};
constexpr Icon Center = {"\xee\xb9\x85"};
constexpr Icon Identify = {"\xee\xb9\x86"};
}  // namespace Map

namespace MapBoundary {
constexpr Icon Unnamed = {"\xee\xb9\x83"};
constexpr Icon Vegetation = {"\xee\xb9\x84"};
}  // namespace MapBoundary

constexpr Icon MarineWarning = {"\xee\xb9\x87"};
constexpr Icon MathCurve = {"\xee\xb9\x88"};
constexpr Icon Maximize = {"\xee\xb9\x89"};
constexpr Icon MediaCast = {"\xee\xb9\x8a"};
namespace Media {
namespace Library {
constexpr Icon Unnamed = {"\xee\xb9\x8b"};
constexpr Icon Filled = {"\xee\xb9\x8c"};
}  // namespace Library

}  // namespace Media

namespace Medication {
constexpr Icon Unnamed = {"\xee\xb9\x8d"};
constexpr Icon Alert = {"\xee\xb9\x8e"};
constexpr Icon Reminder = {"\xee\xb9\x8f"};
}  // namespace Medication

constexpr Icon Menu = {"\xee\xb9\x90"};
constexpr Icon Merge = {"\xee\xb9\x91"};
constexpr Icon MergeNode = {"\xee\xb9\x92"};
constexpr Icon MessageQueue = {"\xee\xb9\x93"};
namespace Meter {
constexpr Icon Unnamed = {"\xee\xb9\x94"};
constexpr Icon Alt = {"\xee\xb9\x95"};
}  // namespace Meter

namespace Microphone {
constexpr Icon Unnamed = {"\xee\xb9\x96"};
constexpr Icon Filled = {"\xee\xb9\x97"};
namespace Off {
constexpr Icon Unnamed = {"\xee\xb9\x98"};
constexpr Icon Filled = {"\xee\xb9\x99"};
}  // namespace Off

}  // namespace Microphone

constexpr Icon Microscope = {"\xee\xb9\x9a"};
namespace Microservices {
constexpr Icon _1 = {"\xee\xb9\x9b"};
constexpr Icon _2 = {"\xee\xb9\x9c"};
}  // namespace Microservices

namespace Migrate {
constexpr Icon Unnamed = {"\xee\xb9\x9d"};
constexpr Icon Alt = {"\xee\xb9\x9e"};
}  // namespace Migrate

constexpr Icon Milestone = {"\xee\xb9\x9f"};
constexpr Icon MilitaryCamp = {"\xee\xb9\xa0"};
constexpr Icon Minimize = {"\xee\xb9\xa1"};
namespace Misuse {
constexpr Icon Unnamed = {"\xee\xb9\xa2"};
constexpr Icon Outline = {"\xee\xb9\xa3"};
}  // namespace Misuse

constexpr Icon MixedRainHail = {"\xee\xb9\xa4"};
namespace MlModel {
constexpr Icon Reference = {"\xee\xb9\xa5"};
}

namespace Mobile {
constexpr Icon Unnamed = {"\xee\xb9\xa6"};
constexpr Icon Add = {"\xee\xb9\xa7"};
constexpr Icon Audio = {"\xee\xb9\xa8"};
constexpr Icon Check = {"\xee\xb9\xa9"};
constexpr Icon Crash = {"\xee\xb9\xaa"};
constexpr Icon Download = {"\xee\xb9\xab"};
constexpr Icon Event = {"\xee\xb9\xac"};
constexpr Icon Landscape = {"\xee\xb9\xad"};
constexpr Icon Request = {"\xee\xb9\xae"};
constexpr Icon Session = {"\xee\xb9\xaf"};
constexpr Icon View = {"\xee\xb9\xb0"};
constexpr Icon ViewOrientation = {"\xee\xb9\xb1"};
}  // namespace Mobile

namespace Mobility {
constexpr Icon Services = {"\xee\xb9\xb2"};
}

namespace Model {
constexpr Icon Unnamed = {"\xee\xb9\xb3"};
constexpr Icon Alt = {"\xee\xb9\xb4"};
constexpr Icon Foundation = {"\xee\xb9\xb7"};
constexpr Icon Reference = {"\xee\xb9\xb8"};
constexpr Icon Tuned = {"\xee\xb9\xb9"};
}  // namespace Model

namespace ModelBuilder {
constexpr Icon Unnamed = {"\xee\xb9\xb5"};
constexpr Icon Reference = {"\xee\xb9\xb6"};
}  // namespace ModelBuilder

constexpr Icon Money = {"\xee\xb9\xba"};
constexpr Icon Monster = {"\xee\xb9\xbb"};
constexpr Icon Monument = {"\xee\xb9\xbc"};
constexpr Icon Moon = {"\xee\xb9\xbd"};
constexpr Icon Moonrise = {"\xee\xb9\xbe"};
constexpr Icon Moonset = {"\xee\xb9\xbf"};
namespace MostlyCloudy {
constexpr Icon Unnamed = {"\xee\xba\x80"};
constexpr Icon Night = {"\xee\xba\x81"};
}  // namespace MostlyCloudy

constexpr Icon Mountain = {"\xee\xba\x82"};
constexpr Icon Mov = {"\xee\xba\x83"};
constexpr Icon Move = {"\xee\xba\x84"};
constexpr Icon Movement = {"\xee\xba\x85"};
constexpr Icon Mp3 = {"\xee\xba\x86"};
constexpr Icon Mp4 = {"\xee\xba\x87"};
constexpr Icon Mpeg = {"\xee\xba\x88"};
constexpr Icon Mpg2 = {"\xee\xba\x89"};
constexpr Icon MultiuserDevice = {"\xee\xba\x8a"};
namespace Music {
constexpr Icon Unnamed = {"\xee\xba\x8b"};
constexpr Icon Add = {"\xee\xba\x8c"};
constexpr Icon Remove = {"\xee\xba\x8d"};
}  // namespace Music

constexpr Icon Mysql = {"\xee\xba\x8e"};
constexpr Icon NameSpace = {"\xee\xba\x8f"};
namespace Navaid {
constexpr Icon Civil = {"\xee\xba\x90"};
constexpr Icon Dme = {"\xee\xba\x91"};
constexpr Icon Helipad = {"\xee\xba\x92"};
constexpr Icon Military = {"\xee\xba\x93"};
constexpr Icon MilitaryCivil = {"\xee\xba\x94"};
constexpr Icon Ndb = {"\xee\xba\x95"};
constexpr Icon NdbDmePath1 = {"\xee\xba\x96"};
constexpr Icon NdbDmePath2 = {"\xee\xba\x97"};
constexpr Icon NdbDmePath3 = {"\xee\xba\x98"};
constexpr Icon NdbDmePath4 = {"\xee\xba\x99"};
constexpr Icon NdbDmePath5 = {"\xee\xba\x9a"};
constexpr Icon NdbDmePath6 = {"\xee\xba\x9b"};
constexpr Icon NdbDmePath7 = {"\xee\xba\x9c"};
constexpr Icon NdbDmePath8 = {"\xee\xba\x9d"};
constexpr Icon NdbDmePath9 = {"\xee\xba\x9e"};
constexpr Icon NdbDmePath10 = {"\xee\xba\x9f"};
constexpr Icon NdbDmePath11 = {"\xee\xba\xa0"};
constexpr Icon NdbDmePath12 = {"\xee\xba\xa1"};
constexpr Icon NdbDmePath13 = {"\xee\xba\xa2"};
constexpr Icon NdbDmePath14 = {"\xee\xba\xa3"};
constexpr Icon NdbDmePath15 = {"\xee\xba\xa4"};
constexpr Icon NdbDmePath16 = {"\xee\xba\xa5"};
constexpr Icon NdbDmePath17 = {"\xee\xba\xa6"};
constexpr Icon NdbDmePath18 = {"\xee\xba\xa7"};
constexpr Icon NdbDmePath19 = {"\xee\xba\xa8"};
constexpr Icon NdbDmePath20 = {"\xee\xba\xa9"};
constexpr Icon NdbDmePath21 = {"\xee\xba\xaa"};
constexpr Icon NdbDmePath22 = {"\xee\xba\xab"};
constexpr Icon Private = {"\xee\xba\xac"};
constexpr Icon Seaplane = {"\xee\xba\xad"};
constexpr Icon Tacan = {"\xee\xba\xae"};
constexpr Icon Vhfor = {"\xee\xba\xaf"};
constexpr Icon VorPath1 = {"\xee\xba\xb0"};
constexpr Icon VorPath2 = {"\xee\xba\xb1"};
constexpr Icon VordmePath1 = {"\xee\xba\xb2"};
constexpr Icon VordmePath2 = {"\xee\xba\xb3"};
constexpr Icon Vortac = {"\xee\xba\xb4"};
}  // namespace Navaid

constexpr Icon Need = {"\xee\xba\xb5"};
namespace Network {
constexpr Icon _1 = {"\xee\xba\xb6"};
constexpr Icon _2 = {"\xee\xba\xb7"};
namespace _3 {
constexpr Icon Unnamed = {"\xee\xba\xb8"};
constexpr Icon Reference = {"\xee\xba\xb9"};
}  // namespace _3

namespace _4 {
constexpr Icon Unnamed = {"\xee\xba\xba"};
constexpr Icon Reference = {"\xee\xba\xbb"};
}  // namespace _4

constexpr Icon AdminControl = {"\xee\xba\xbc"};
constexpr Icon Enterprise = {"\xee\xba\xbd"};
constexpr Icon Overlay = {"\xee\xba\xbf"};
constexpr Icon Public = {"\xee\xbb\x80"};
}  // namespace Network

constexpr Icon NetworkInterface = {"\xee\xba\xbe"};
constexpr Icon NetworkTimeProtocol = {"\xee\xbb\x81"};
constexpr Icon NewTab = {"\xee\xbb\x82"};
namespace Next {
constexpr Icon Filled = {"\xee\xbb\x83"};
constexpr Icon Outline = {"\xee\xbb\x84"};
}  // namespace Next

constexpr Icon NoImage = {"\xee\xbb\x85"};
constexpr Icon Nominal = {"\xee\xbb\x86"};
constexpr Icon NonCertified = {"\xee\xbb\x87"};
constexpr Icon NoodleBowl = {"\xee\xbb\x88"};
constexpr Icon NotAvailable = {"\xee\xbb\x89"};
namespace Notebook {
constexpr Icon Unnamed = {"\xee\xbb\x8a"};
constexpr Icon Reference = {"\xee\xbb\x8b"};
}  // namespace Notebook

constexpr Icon NoTicket = {"\xee\xbb\x8c"};
namespace Notification {
constexpr Icon Unnamed = {"\xee\xbb\x8d"};
constexpr Icon Filled = {"\xee\xbb\x8f"};
constexpr Icon New = {"\xee\xbb\x90"};
namespace Off {
constexpr Icon Unnamed = {"\xee\xbb\x91"};
constexpr Icon Filled = {"\xee\xbb\x92"};
}  // namespace Off

}  // namespace Notification

constexpr Icon NotificationCounter = {"\xee\xbb\x8e"};
namespace NotSent {
constexpr Icon Unnamed = {"\xee\xbb\x93"};
constexpr Icon Filled = {"\xee\xbb\x94"};
}  // namespace NotSent

constexpr Icon NullSign = {"\xee\xbb\x95"};
namespace Number {
constexpr Icon _0 = {"\xee\xbb\x96"};
constexpr Icon _1 = {"\xee\xbb\x97"};
constexpr Icon _2 = {"\xee\xbb\x98"};
constexpr Icon _3 = {"\xee\xbb\x99"};
constexpr Icon _4 = {"\xee\xbb\x9a"};
constexpr Icon _5 = {"\xee\xbb\x9b"};
constexpr Icon _6 = {"\xee\xbb\x9c"};
constexpr Icon _7 = {"\xee\xbb\x9d"};
constexpr Icon _8 = {"\xee\xbb\x9e"};
constexpr Icon _9 = {"\xee\xbb\x9f"};
namespace Small {
constexpr Icon _0 = {"\xee\xbb\xa0"};
constexpr Icon _1 = {"\xee\xbb\xa1"};
constexpr Icon _2 = {"\xee\xbb\xa2"};
constexpr Icon _3 = {"\xee\xbb\xa3"};
constexpr Icon _4 = {"\xee\xbb\xa4"};
constexpr Icon _5 = {"\xee\xbb\xa5"};
constexpr Icon _6 = {"\xee\xbb\xa6"};
constexpr Icon _7 = {"\xee\xbb\xa7"};
constexpr Icon _8 = {"\xee\xbb\xa8"};
constexpr Icon _9 = {"\xee\xbb\xa9"};
}  // namespace Small

}  // namespace Number

constexpr Icon Object = {"\xee\xbb\xaa"};
namespace ObjectStorage {
constexpr Icon Unnamed = {"\xee\xbb\xab"};
constexpr Icon Alt = {"\xee\xbb\xac"};
}  // namespace ObjectStorage

namespace Observed {
constexpr Icon Hail = {"\xee\xbb\xad"};
constexpr Icon Lightning = {"\xee\xbb\xae"};
}  // namespace Observed

constexpr Icon Omega = {"\xee\xbb\xaf"};
constexpr Icon Opacity = {"\xee\xbb\xb0"};
namespace OpenPanel {
constexpr Icon Bottom = {"\xee\xbb\xb1"};
namespace Filled {
constexpr Icon Bottom = {"\xee\xbb\xb2"};
constexpr Icon Left = {"\xee\xbb\xb3"};
constexpr Icon Right = {"\xee\xbb\xb4"};
constexpr Icon Top = {"\xee\xbb\xb5"};
}  // namespace Filled

constexpr Icon Left = {"\xee\xbb\xb6"};
constexpr Icon Right = {"\xee\xbb\xb7"};
constexpr Icon Top = {"\xee\xbb\xb8"};
}  // namespace OpenPanel

namespace Operations {
constexpr Icon Field = {"\xee\xbb\xb9"};
constexpr Icon Record = {"\xee\xbb\xba"};
}  // namespace Operations

constexpr Icon OrderDetails = {"\xee\xbb\xbb"};
constexpr Icon Ordinal = {"\xee\xbb\xbc"};
constexpr Icon Outage = {"\xee\xbb\xbd"};
constexpr Icon OutlookSevere = {"\xee\xbb\xbe"};
namespace OverflowMenu {
constexpr Icon Horizontal = {"\xee\xbb\xbf"};
constexpr Icon Vertical = {"\xee\xbc\x80"};
}  // namespace OverflowMenu

constexpr Icon Overlay = {"\xee\xbc\x81"};
namespace Package {
constexpr Icon Unnamed = {"\xee\xbc\x82"};
constexpr Icon TextAnalysis = {"\xee\xbc\x84"};
}  // namespace Package

constexpr Icon PackageNode = {"\xee\xbc\x83"};
constexpr Icon PageBreak = {"\xee\xbc\x85"};
namespace Page {
constexpr Icon First = {"\xee\xbc\x86"};
constexpr Icon Last = {"\xee\xbc\x87"};
}  // namespace Page

constexpr Icon PageNumber = {"\xee\xbc\x88"};
namespace PaintBrush {
constexpr Icon Unnamed = {"\xee\xbc\x89"};
constexpr Icon Alt = {"\xee\xbc\x8a"};
}  // namespace PaintBrush

constexpr Icon PalmTree = {"\xee\xbc\x8b"};
constexpr Icon PanelExpansion = {"\xee\xbc\x8c"};
namespace Pan {
constexpr Icon Horizontal = {"\xee\xbc\x8d"};
constexpr Icon Vertical = {"\xee\xbc\x8e"};
}  // namespace Pan

constexpr Icon Paragraph = {"\xee\xbc\x8f"};
constexpr Icon Parameter = {"\xee\xbc\x90"};
constexpr Icon ParentChild = {"\xee\xbc\x91"};
namespace Part {
constexpr Icon Definition = {"\xee\xbc\x92"};
constexpr Icon Usage = {"\xee\xbc\x9b"};
}  // namespace Part

namespace Partition {
constexpr Icon Auto = {"\xee\xbc\x93"};
constexpr Icon Collection = {"\xee\xbc\x94"};
constexpr Icon Repartition = {"\xee\xbc\x95"};
constexpr Icon Same = {"\xee\xbc\x96"};
constexpr Icon Specific = {"\xee\xbc\x97"};
}  // namespace Partition

namespace PartlyCloudy {
constexpr Icon Unnamed = {"\xee\xbc\x98"};
constexpr Icon Night = {"\xee\xbc\x99"};
}  // namespace PartlyCloudy

constexpr Icon Partnership = {"\xee\xbc\x9a"};
namespace Passenger {
constexpr Icon Drinks = {"\xee\xbc\x9c"};
constexpr Icon Plus = {"\xee\xbc\x9d"};
}  // namespace Passenger

constexpr Icon Password = {"\xee\xbc\x9e"};
constexpr Icon Paste = {"\xee\xbc\x9f"};
namespace Pause {
constexpr Icon Unnamed = {"\xee\xbc\xa0"};
constexpr Icon Filled = {"\xee\xbc\xa1"};
namespace Outline {
constexpr Icon Unnamed = {"\xee\xbc\xa3"};
constexpr Icon Filled = {"\xee\xbc\xa4"};
}  // namespace Outline

}  // namespace Pause

constexpr Icon PauseFuture = {"\xee\xbc\xa2"};
constexpr Icon PausePast = {"\xee\xbc\xa5"};
namespace Pcn {
constexpr Icon ENode = {"\xee\xbc\xa6"};
constexpr Icon Military = {"\xee\xbc\xa7"};
constexpr Icon PNode = {"\xee\xbc\xa8"};
constexpr Icon ZNode = {"\xee\xbc\xa9"};
}  // namespace Pcn

namespace Pdf {
constexpr Icon Unnamed = {"\xee\xbc\xaa"};
constexpr Icon Reference = {"\xee\xbc\xab"};
}  // namespace Pdf

namespace Pedestrian {
constexpr Icon Unnamed = {"\xee\xbc\xac"};
constexpr Icon Family = {"\xee\xbc\xae"};
}  // namespace Pedestrian

constexpr Icon PedestrianChild = {"\xee\xbc\xad"};
namespace Pen {
constexpr Icon Unnamed = {"\xee\xbc\xaf"};
constexpr Icon Fountain = {"\xee\xbc\xb2"};
}  // namespace Pen

namespace Pending {
constexpr Icon Unnamed = {"\xee\xbc\xb0"};
constexpr Icon Filled = {"\xee\xbc\xb1"};
}  // namespace Pending

namespace Pentagon {
namespace Down {
constexpr Icon Outline = {"\xee\xbc\xb3"};
constexpr Icon Solid = {"\xee\xbc\xb4"};
}  // namespace Down

namespace Left {
constexpr Icon Outline = {"\xee\xbc\xb5"};
constexpr Icon Solid = {"\xee\xbc\xb6"};
}  // namespace Left

constexpr Icon Outline = {"\xee\xbc\xb7"};
namespace Right {
constexpr Icon Outline = {"\xee\xbc\xb8"};
constexpr Icon Solid = {"\xee\xbc\xb9"};
}  // namespace Right

constexpr Icon Solid = {"\xee\xbc\xba"};
}  // namespace Pentagon

namespace Percentage {
constexpr Icon Unnamed = {"\xee\xbc\xbb"};
constexpr Icon Filled = {"\xee\xbc\xbc"};
}  // namespace Percentage

namespace Person {
constexpr Icon Unnamed = {"\xee\xbc\xbd"};
constexpr Icon Favorite = {"\xee\xbc\xbe"};
}  // namespace Person

constexpr Icon Pest = {"\xee\xbc\xbf"};
namespace Phone {
constexpr Icon Unnamed = {"\xee\xbd\x80"};
constexpr Icon Application = {"\xee\xbd\x81"};
namespace Block {
constexpr Icon Unnamed = {"\xee\xbd\x82"};
constexpr Icon Filled = {"\xee\xbd\x83"};
}  // namespace Block

constexpr Icon Filled = {"\xee\xbd\x84"};
constexpr Icon IncomingPath1 = {"\xee\xbd\x85"};
constexpr Icon IncomingPath2 = {"\xee\xbd\x86"};
namespace Incoming {
constexpr Icon FilledPath1 = {"\xee\xbd\x87"};
constexpr Icon FilledPath2 = {"\xee\xbd\x88"};
}  // namespace Incoming

constexpr Icon Ip = {"\xee\xbd\x89"};
namespace Off {
constexpr Icon Unnamed = {"\xee\xbd\x8a"};
constexpr Icon Filled = {"\xee\xbd\x8b"};
}  // namespace Off

constexpr Icon OutgoingPath1 = {"\xee\xbd\x8c"};
constexpr Icon OutgoingPath2 = {"\xee\xbd\x8d"};
namespace Outgoing {
constexpr Icon FilledPath1 = {"\xee\xbd\x8e"};
constexpr Icon FilledPath2 = {"\xee\xbd\x8f"};
}  // namespace Outgoing

constexpr Icon Settings = {"\xee\xbd\x90"};
namespace Voice {
constexpr Icon Unnamed = {"\xee\xbd\x91"};
constexpr Icon Filled = {"\xee\xbd\x92"};
}  // namespace Voice

}  // namespace Phone

constexpr Icon PhraseSentiment = {"\xee\xbd\x93"};
constexpr Icon PicnicArea = {"\xee\xbd\x94"};
namespace PiggyBank {
constexpr Icon Unnamed = {"\xee\xbd\x95"};
constexpr Icon Slot = {"\xee\xbd\x96"};
}  // namespace PiggyBank

namespace Pills {
constexpr Icon Unnamed = {"\xee\xbd\x97"};
constexpr Icon Add = {"\xee\xbd\x98"};
constexpr Icon Subtract = {"\xee\xbd\x99"};
}  // namespace Pills

namespace Pin {
constexpr Icon Unnamed = {"\xee\xbd\x9a"};
constexpr Icon Filled = {"\xee\xbd\x9b"};
}  // namespace Pin

constexpr Icon Pipelines = {"\xee\xbd\x9c"};
constexpr Icon Plan = {"\xee\xbd\x9d"};
namespace Plane {
constexpr Icon Unnamed = {"\xee\xbd\x9e"};
constexpr Icon Private = {"\xee\xbd\x9f"};
constexpr Icon Sea = {"\xee\xbd\xa0"};
}  // namespace Plane

constexpr Icon Platforms = {"\xee\xbd\xa1"};
namespace Play {
constexpr Icon Unnamed = {"\xee\xbd\xa2"};
namespace Filled {
constexpr Icon Unnamed = {"\xee\xbd\xa3"};
constexpr Icon Alt = {"\xee\xbd\xa4"};
}  // namespace Filled

namespace Outline {
constexpr Icon Unnamed = {"\xee\xbd\xa6"};
constexpr Icon Filled = {"\xee\xbd\xa7"};
}  // namespace Outline

}  // namespace Play

constexpr Icon Playlist = {"\xee\xbd\xa5"};
namespace Plug {
constexpr Icon Unnamed = {"\xee\xbd\xa8"};
constexpr Icon Filled = {"\xee\xbd\xa9"};
}  // namespace Plug

constexpr Icon Png = {"\xee\xbd\xaa"};
constexpr Icon PointOfPresence = {"\xee\xbd\xab"};
constexpr Icon Police = {"\xee\xbd\xac"};
constexpr Icon Policy = {"\xee\xbd\xad"};
constexpr Icon Popup = {"\xee\xbd\xae"};
namespace Port {
constexpr Icon Definition = {"\xee\xbd\xaf"};
constexpr Icon Input = {"\xee\xbd\xb1"};
constexpr Icon Output = {"\xee\xbd\xb2"};
constexpr Icon Usage = {"\xee\xbd\xb3"};
}  // namespace Port

constexpr Icon Portfolio = {"\xee\xbd\xb0"};
constexpr Icon Power = {"\xee\xbd\xb4"};
constexpr Icon PowerEnterprisePoolsMeteredCapacityIntegration = {"\xee\xbd\xb5"};
constexpr Icon PowerVirtualServerDisasterRecoveryAutomation = {"\xee\xbd\xb6"};
constexpr Icon Ppt = {"\xee\xbd\xb7"};
constexpr Icon PresentationFile = {"\xee\xbd\xb8"};
namespace Pressure {
constexpr Icon Unnamed = {"\xee\xbd\xb9"};
constexpr Icon Filled = {"\xee\xbd\xba"};
}  // namespace Pressure

namespace Previous {
constexpr Icon Filled = {"\xee\xbd\xbb"};
constexpr Icon Outline = {"\xee\xbd\xbc"};
}  // namespace Previous

namespace Pricing {
constexpr Icon Consumption = {"\xee\xbd\xbd"};
constexpr Icon Container = {"\xee\xbd\xbe"};
constexpr Icon QuickProposal = {"\xee\xbd\xbf"};
constexpr Icon Tailored = {"\xee\xbe\x80"};
constexpr Icon Traditional = {"\xee\xbe\x81"};
}  // namespace Pricing

constexpr Icon Printer = {"\xee\xbe\x82"};
constexpr Icon Process = {"\xee\xbe\x83"};
constexpr Icon ProcessAutomate = {"\xee\xbe\x84"};
constexpr Icon Product = {"\xee\xbe\x85"};
namespace ProgressBar {
constexpr Icon Unnamed = {"\xee\xbe\x86"};
constexpr Icon Round = {"\xee\xbe\x87"};
}  // namespace ProgressBar

constexpr Icon Promote = {"\xee\xbe\x88"};
constexpr Icon PromptSession = {"\xee\xbe\x89"};
constexpr Icon PromptTemplate = {"\xee\xbe\x8a"};
constexpr Icon PropertyRelationship = {"\xee\xbe\x8b"};
constexpr Icon PullRequest = {"\xee\xbe\x8c"};
constexpr Icon PunctuationCheck = {"\xee\xbe\x8d"};
constexpr Icon Purchase = {"\xee\xbe\x8e"};
constexpr Icon Qiskit = {"\xee\xbe\x8f"};
constexpr Icon QqPlot = {"\xee\xbe\x90"};
constexpr Icon QrCode = {"\xee\xbe\x91"};
constexpr Icon QuadrantPlot = {"\xee\xbe\x92"};
constexpr Icon Query = {"\xee\xbe\x93"};
constexpr Icon QueryQueue = {"\xee\xbe\x94"};
constexpr Icon QuestionAnswering = {"\xee\xbe\x95"};
constexpr Icon Queued = {"\xee\xbe\x96"};
constexpr Icon Quotes = {"\xee\xbe\x97"};
namespace Radar {
constexpr Icon Unnamed = {"\xee\xbe\x98"};
constexpr Icon Enhanced = {"\xee\xbe\x99"};
constexpr Icon Weather = {"\xee\xbe\x9a"};
}  // namespace Radar

namespace Radio {
constexpr Icon Unnamed = {"\xee\xbe\x9b"};
constexpr Icon Combat = {"\xee\xbe\x9e"};
constexpr Icon PushToTalk = {"\xee\xbe\x9f"};
}  // namespace Radio

namespace RadioButton {
constexpr Icon Unnamed = {"\xee\xbe\x9c"};
constexpr Icon Checked = {"\xee\xbe\x9d"};
}  // namespace RadioButton

constexpr Icon Rag = {"\xee\xbe\xa0"};
namespace Rain {
constexpr Icon Unnamed = {"\xee\xbe\xa1"};
constexpr Icon Drizzle = {"\xee\xbe\xa2"};
constexpr Icon Heavy = {"\xee\xbe\xa4"};
namespace Scattered {
constexpr Icon Unnamed = {"\xee\xbe\xa5"};
constexpr Icon Night = {"\xee\xbe\xa6"};
}  // namespace Scattered

}  // namespace Rain

constexpr Icon RainDrop = {"\xee\xbe\xa3"};
constexpr Icon Raw = {"\xee\xbe\xa7"};
constexpr Icon Receipt = {"\xee\xbe\xa8"};
constexpr Icon RecentlyViewed = {"\xee\xbe\xa9"};
constexpr Icon Recommend = {"\xee\xbe\xaa"};
namespace Recording {
constexpr Icon Unnamed = {"\xee\xbe\xab"};
namespace Filled {
constexpr Icon Unnamed = {"\xee\xbe\xac"};
constexpr Icon Alt = {"\xee\xbe\xad"};
}  // namespace Filled

}  // namespace Recording

constexpr Icon Recycle = {"\xee\xbe\xae"};
constexpr Icon Redo = {"\xee\xbe\xaf"};
constexpr Icon ReferenceArchitecture = {"\xee\xbe\xb0"};
constexpr Icon RefEvapotranspiration = {"\xee\xbe\xb1"};
namespace Reflect {
constexpr Icon Horizontal = {"\xee\xbe\xb2"};
constexpr Icon Vertical = {"\xee\xbe\xb3"};
}  // namespace Reflect

namespace Reminder {
constexpr Icon Unnamed = {"\xee\xbe\xb4"};
constexpr Icon Medical = {"\xee\xbe\xb5"};
}  // namespace Reminder

constexpr Icon Renew = {"\xee\xbe\xb6"};
namespace Repeat {
constexpr Icon Unnamed = {"\xee\xbe\xb7"};
constexpr Icon One = {"\xee\xbe\xb8"};
}  // namespace Repeat

constexpr Icon Replicate = {"\xee\xbe\xb9"};
namespace Reply {
constexpr Icon Unnamed = {"\xee\xbe\xba"};
constexpr Icon All = {"\xee\xbe\xbb"};
}  // namespace Reply

namespace Repo {
constexpr Icon Artifact = {"\xee\xbe\xbc"};
constexpr Icon SourceCode = {"\xee\xbe\xbf"};
}  // namespace Repo

namespace Report {
constexpr Icon Unnamed = {"\xee\xbe\xbd"};
constexpr Icon Data = {"\xee\xbe\xbe"};
}  // namespace Report

constexpr Icon RequestQuote = {"\xee\xbf\x80"};
namespace Requirement {
constexpr Icon Definition = {"\xee\xbf\x81"};
constexpr Icon Usage = {"\xee\xbf\x82"};
}  // namespace Requirement

namespace Reset {
constexpr Icon Unnamed = {"\xee\xbf\x83"};
constexpr Icon Alt = {"\xee\xbf\x84"};
}  // namespace Reset

constexpr Icon Restart = {"\xee\xbf\x85"};
namespace Restaurant {
constexpr Icon Unnamed = {"\xee\xbf\x86"};
constexpr Icon Fine = {"\xee\xbf\x87"};
}  // namespace Restaurant

namespace Result {
constexpr Icon Unnamed = {"\xee\xbf\x88"};
constexpr Icon Draft = {"\xee\xbf\x89"};
constexpr Icon New = {"\xee\xbf\x8a"};
constexpr Icon Old = {"\xee\xbf\x8b"};
}  // namespace Result

namespace Retry {
constexpr Icon Failed = {"\xee\xbf\x8c"};
}

constexpr Icon Return = {"\xee\xbf\x8d"};
constexpr Icon Review = {"\xee\xbf\x8e"};
namespace Rewind {
constexpr Icon _5 = {"\xee\xbf\x8f"};
constexpr Icon _10 = {"\xee\xbf\x90"};
constexpr Icon _30 = {"\xee\xbf\x91"};
}  // namespace Rewind

namespace RightPanel {
namespace Close {
constexpr Icon Unnamed = {"\xee\xbf\x92"};
constexpr Icon Filled = {"\xee\xbf\x93"};
}  // namespace Close

namespace Open {
constexpr Icon Unnamed = {"\xee\xbf\x94"};
constexpr Icon Filled = {"\xee\xbf\x95"};
}  // namespace Open

}  // namespace RightPanel

namespace Road {
constexpr Icon Unnamed = {"\xee\xbf\x96"};
constexpr Icon Weather = {"\xee\xbf\x98"};
}  // namespace Road

constexpr Icon Roadmap = {"\xee\xbf\x97"};
constexpr Icon Rocket = {"\xee\xbf\x99"};
namespace Rotate {
constexpr Icon Unnamed = {"\xee\xbf\x9a"};
namespace Clockwise {
constexpr Icon Unnamed = {"\xee\xbf\x9b"};
namespace Alt {
constexpr Icon Unnamed = {"\xee\xbf\x9c"};
constexpr Icon Filled = {"\xee\xbf\x9d"};
}  // namespace Alt

constexpr Icon Filled = {"\xee\xbf\x9e"};
}  // namespace Clockwise

namespace Counterclockwise {
constexpr Icon Unnamed = {"\xee\xbf\x9f"};
namespace Alt {
constexpr Icon Unnamed = {"\xee\xbf\xa0"};
constexpr Icon Filled = {"\xee\xbf\xa1"};
}  // namespace Alt

constexpr Icon Filled = {"\xee\xbf\xa2"};
}  // namespace Counterclockwise

}  // namespace Rotate

namespace Router {
constexpr Icon Unnamed = {"\xee\xbf\xa3"};
constexpr Icon Voice = {"\xee\xbf\xa4"};
constexpr Icon Wifi = {"\xee\xbf\xa5"};
}  // namespace Router

namespace Row {
constexpr Icon Unnamed = {"\xee\xbf\xa6"};
constexpr Icon Collapse = {"\xee\xbf\xa7"};
constexpr Icon Delete = {"\xee\xbf\xa8"};
constexpr Icon Expand = {"\xee\xbf\xa9"};
constexpr Icon Insert = {"\xee\xbf\xaa"};
}  // namespace Row

constexpr Icon Rss = {"\xee\xbf\xab"};
namespace Rule {
constexpr Icon Unnamed = {"\xee\xbf\xac"};
constexpr Icon Cancelled = {"\xee\xbf\xad"};
constexpr Icon DataQualityPath1 = {"\xee\xbf\xae"};
constexpr Icon DataQualityPath2 = {"\xee\xbf\xaf"};
constexpr Icon DataQualityPath3 = {"\xee\xbf\xb0"};
constexpr Icon DataQualityPath4 = {"\xee\xbf\xb1"};
constexpr Icon Draft = {"\xee\xbf\xb2"};
constexpr Icon Filled = {"\xee\xbf\xb3"};
constexpr Icon Locked = {"\xee\xbf\xb4"};
constexpr Icon Partial = {"\xee\xbf\xb5"};
constexpr Icon Test = {"\xee\xbf\xb8"};
}  // namespace Rule

namespace Ruler {
constexpr Icon Unnamed = {"\xee\xbf\xb6"};
constexpr Icon Alt = {"\xee\xbf\xb7"};
}  // namespace Ruler

namespace Run {
constexpr Icon Unnamed = {"\xee\xbf\xb9"};
constexpr Icon Mirror = {"\xee\xbf\xba"};
}  // namespace Run

constexpr Icon Running = {"\xee\xbf\xbb"};
namespace Sailboat {
constexpr Icon Coastal = {"\xee\xbf\xbc"};
constexpr Icon Offshore = {"\xee\xbf\xbd"};
}  // namespace Sailboat

constexpr Icon SalesOps = {"\xee\xbf\xbe"};
namespace SankeyDiagram {
constexpr Icon Unnamed = {"\xee\xbf\xbf"};
constexpr Icon Alt = {"\xef\x80\x80"};
}  // namespace SankeyDiagram

namespace Satellite {
constexpr Icon Unnamed = {"\xef\x80\x81"};
constexpr Icon Radar = {"\xef\x80\x82"};
constexpr Icon Weather = {"\xef\x80\x83"};
}  // namespace Satellite

namespace Satisfy {
constexpr Icon Definition = {"\xef\x80\x84"};
constexpr Icon Usage = {"\xef\x80\x85"};
}  // namespace Satisfy

namespace Save {
constexpr Icon Unnamed = {"\xef\x80\x86"};
constexpr Icon Model = {"\xef\x80\x87"};
}  // namespace Save

constexpr Icon Scale = {"\xef\x80\x88"};
namespace Scales {
constexpr Icon Unnamed = {"\xef\x80\x89"};
constexpr Icon Tipped = {"\xef\x80\x8a"};
}  // namespace Scales

constexpr Icon Scalpel = {"\xef\x80\x8b"};
namespace Scan {
constexpr Icon Unnamed = {"\xef\x80\x8c"};
constexpr Icon Alt = {"\xef\x80\x8d"};
constexpr Icon Disabled = {"\xef\x80\x8e"};
}  // namespace Scan

constexpr Icon ScatterMatrix = {"\xef\x80\x8f"};
constexpr Icon Schematics = {"\xef\x80\x90"};
namespace Scis {
constexpr Icon ControlTower = {"\xef\x80\x91"};
constexpr Icon TransparentSupply = {"\xef\x80\x92"};
}  // namespace Scis

namespace Scooter {
constexpr Icon Unnamed = {"\xef\x80\x93"};
constexpr Icon Front = {"\xef\x80\x94"};
}  // namespace Scooter

namespace Screen {
constexpr Icon Unnamed = {"\xef\x80\x95"};
constexpr Icon Off = {"\xef\x80\x98"};
}  // namespace Screen

namespace ScreenMap {
constexpr Icon Unnamed = {"\xef\x80\x96"};
constexpr Icon Set = {"\xef\x80\x97"};
}  // namespace ScreenMap

namespace Script {
constexpr Icon Unnamed = {"\xef\x80\x99"};
constexpr Icon Reference = {"\xef\x80\x9a"};
}  // namespace Script

constexpr Icon Sdk = {"\xef\x80\x9b"};
namespace Search {
constexpr Icon Unnamed = {"\xef\x80\x9c"};
constexpr Icon Advanced = {"\xef\x80\x9d"};
namespace Locate {
constexpr Icon Unnamed = {"\xef\x80\x9e"};
constexpr Icon Mirror = {"\xef\x80\x9f"};
}  // namespace Locate

}  // namespace Search

constexpr Icon Security = {"\xef\x80\xa0"};
constexpr Icon SecurityServices = {"\xef\x80\xa1"};
namespace Select {
constexpr Icon _01 = {"\xef\x80\xa2"};
constexpr Icon _02 = {"\xef\x80\xa3"};
constexpr Icon Window = {"\xef\x80\xa4"};
}  // namespace Select

namespace Send {
constexpr Icon Unnamed = {"\xef\x80\xa5"};
namespace Alt {
constexpr Icon Unnamed = {"\xef\x80\xa7"};
constexpr Icon Filled = {"\xef\x80\xa8"};
}  // namespace Alt

constexpr Icon Filled = {"\xef\x80\xaa"};
}  // namespace Send

namespace SendAction {
constexpr Icon Usage = {"\xef\x80\xa6"};
}

constexpr Icon SendBackward = {"\xef\x80\xa9"};
constexpr Icon SendToBack = {"\xef\x80\xab"};
namespace Server {
constexpr Icon Dns = {"\xef\x80\xac"};
constexpr Icon Proxy = {"\xef\x80\xad"};
constexpr Icon Time = {"\xef\x80\xae"};
}  // namespace Server

constexpr Icon ServiceDesk = {"\xef\x80\xaf"};
constexpr Icon ServiceId = {"\xef\x80\xb0"};
constexpr Icon ServiceLevels = {"\xef\x80\xb1"};
constexpr Icon SessionBorderControl = {"\xef\x80\xb2"};
namespace Settings {
constexpr Icon Unnamed = {"\xef\x80\xb3"};
constexpr Icon Adjust = {"\xef\x80\xb4"};
constexpr Icon Check = {"\xef\x80\xb5"};
constexpr Icon Edit = {"\xef\x80\xb6"};
constexpr Icon Services = {"\xef\x80\xb7"};
constexpr Icon View = {"\xef\x80\xb8"};
}  // namespace Settings

namespace Shape {
constexpr Icon Except = {"\xef\x80\xb9"};
constexpr Icon Exclude = {"\xef\x80\xba"};
constexpr Icon Intersect = {"\xef\x80\xbb"};
constexpr Icon Join = {"\xef\x80\xbc"};
constexpr Icon Unite = {"\xef\x80\xbe"};
}  // namespace Shape

constexpr Icon Shapes = {"\xef\x80\xbd"};
constexpr Icon Share = {"\xef\x80\xbf"};
constexpr Icon ShareKnowledge = {"\xef\x81\x80"};
namespace Shopping {
constexpr Icon Bag = {"\xef\x81\x81"};
namespace Cart {
constexpr Icon Unnamed = {"\xef\x81\x82"};
constexpr Icon ArrowDown = {"\xef\x81\x83"};
constexpr Icon ArrowUp = {"\xef\x81\x84"};
constexpr Icon Clear = {"\xef\x81\x85"};
constexpr Icon Error = {"\xef\x81\x86"};
constexpr Icon Minus = {"\xef\x81\x87"};
constexpr Icon Plus = {"\xef\x81\x88"};
}  // namespace Cart

constexpr Icon Catalog = {"\xef\x81\x89"};
}  // namespace Shopping

namespace ShowData {
constexpr Icon Cards = {"\xef\x81\x8a"};
}

namespace ShrinkScreen {
constexpr Icon Unnamed = {"\xef\x81\x8b"};
constexpr Icon Filled = {"\xef\x81\x8c"};
}  // namespace ShrinkScreen

constexpr Icon Shuffle = {"\xef\x81\x8d"};
constexpr Icon Shuttle = {"\xef\x81\x8e"};
namespace SidePanel {
namespace Close {
constexpr Icon Unnamed = {"\xef\x81\x8f"};
constexpr Icon Filled = {"\xef\x81\x90"};
}  // namespace Close

namespace Open {
constexpr Icon Unnamed = {"\xef\x81\x91"};
constexpr Icon Filled = {"\xef\x81\x92"};
}  // namespace Open

}  // namespace SidePanel

constexpr Icon Sight = {"\xef\x81\x93"};
constexpr Icon Sigma = {"\xef\x81\x94"};
constexpr Icon SignalStrength = {"\xef\x81\x95"};
constexpr Icon SimCard = {"\xef\x81\x96"};
namespace SkillLevel {
constexpr Icon Unnamed = {"\xef\x81\x97"};
constexpr Icon Advanced = {"\xef\x81\x98"};
constexpr Icon Basic = {"\xef\x81\x99"};
constexpr Icon Intermediate = {"\xef\x81\x9a"};
}  // namespace SkillLevel

namespace Skip {
namespace Back {
constexpr Icon Unnamed = {"\xef\x81\x9b"};
constexpr Icon Filled = {"\xef\x81\x9c"};
namespace Outline {
constexpr Icon Unnamed = {"\xef\x81\x9d"};
constexpr Icon Filled = {"\xef\x81\x9e"};
constexpr Icon Solid = {"\xef\x81\x9f"};
}  // namespace Outline

namespace Solid {
constexpr Icon Filled = {"\xef\x81\xa0"};
}

}  // namespace Back

namespace Forward {
constexpr Icon Unnamed = {"\xef\x81\xa1"};
constexpr Icon Filled = {"\xef\x81\xa2"};
namespace Outline {
constexpr Icon Unnamed = {"\xef\x81\xa3"};
constexpr Icon Filled = {"\xef\x81\xa4"};
constexpr Icon Solid = {"\xef\x81\xa5"};
}  // namespace Outline

namespace Solid {
constexpr Icon Filled = {"\xef\x81\xa6"};
}

}  // namespace Forward

}  // namespace Skip

constexpr Icon Sleet = {"\xef\x81\xa7"};
constexpr Icon Slisor = {"\xef\x81\xa8"};
constexpr Icon Slm = {"\xef\x81\xa9"};
constexpr Icon Smell = {"\xef\x81\xaa"};
constexpr Icon Smoke = {"\xef\x81\xab"};
constexpr Icon Snooze = {"\xef\x81\xac"};
namespace Snow {
constexpr Icon Unnamed = {"\xef\x81\xad"};
constexpr Icon Blizzard = {"\xef\x81\xae"};
constexpr Icon Heavy = {"\xef\x81\xb1"};
namespace Scattered {
constexpr Icon Unnamed = {"\xef\x81\xb2"};
constexpr Icon Night = {"\xef\x81\xb3"};
}  // namespace Scattered

}  // namespace Snow

constexpr Icon SnowDensity = {"\xef\x81\xaf"};
constexpr Icon Snowflake = {"\xef\x81\xb0"};
constexpr Icon Soccer = {"\xef\x81\xb4"};
namespace SoftwareResource {
constexpr Icon Unnamed = {"\xef\x81\xb5"};
constexpr Icon Cluster = {"\xef\x81\xb6"};
constexpr Icon Resource = {"\xef\x81\xb7"};
}  // namespace SoftwareResource

namespace SoilMoisture {
constexpr Icon Unnamed = {"\xef\x81\xb8"};
constexpr Icon Field = {"\xef\x81\xb9"};
constexpr Icon Global = {"\xef\x81\xba"};
}  // namespace SoilMoisture

namespace SoilTemperature {
constexpr Icon Unnamed = {"\xef\x81\xbb"};
constexpr Icon Field = {"\xef\x81\xbc"};
constexpr Icon Global = {"\xef\x81\xbd"};
}  // namespace SoilTemperature

constexpr Icon SolarPanel = {"\xef\x81\xbe"};
namespace Sort {
constexpr Icon Ascending = {"\xef\x81\xbf"};
constexpr Icon Descending = {"\xef\x82\x80"};
constexpr Icon Remove = {"\xef\x82\x81"};
}  // namespace Sort

constexpr Icon SpellCheck = {"\xef\x82\x82"};
constexpr Icon Split = {"\xef\x82\x83"};
constexpr Icon SplitScreen = {"\xef\x82\x84"};
constexpr Icon SprayPaint = {"\xef\x82\x85"};
constexpr Icon Sprout = {"\xef\x82\x86"};
constexpr Icon SpyreAccelerator = {"\xef\x82\x87"};
constexpr Icon Sql = {"\xef\x82\x88"};
namespace Square {
constexpr Icon Outline = {"\xef\x82\x89"};
constexpr Icon Solid = {"\xef\x82\x8a"};
}  // namespace Square

constexpr Icon StackLimitation = {"\xef\x82\x8b"};
constexpr Icon Stamp = {"\xef\x82\x8c"};
namespace Star {
constexpr Icon Unnamed = {"\xef\x82\x8d"};
constexpr Icon Filled = {"\xef\x82\x8e"};
constexpr Icon Half = {"\xef\x82\x8f"};
constexpr Icon Review = {"\xef\x82\x90"};
}  // namespace Star

constexpr Icon StayInside = {"\xef\x82\x91"};
constexpr Icon StemLeafPlot = {"\xef\x82\x92"};
constexpr Icon Stethoscope = {"\xef\x82\x93"};
constexpr Icon Stickies = {"\xef\x82\x94"};
namespace Stop {
constexpr Icon Unnamed = {"\xef\x82\x95"};
namespace Filled {
constexpr Icon Unnamed = {"\xef\x82\x96"};
constexpr Icon Alt = {"\xef\x82\x97"};
}  // namespace Filled

namespace Outline {
constexpr Icon Unnamed = {"\xef\x82\x98"};
constexpr Icon Filled = {"\xef\x82\x99"};
}  // namespace Outline

}  // namespace Stop

namespace StopSign {
constexpr Icon Unnamed = {"\xef\x82\x9a"};
constexpr Icon Filled = {"\xef\x82\x9b"};
}  // namespace StopSign

constexpr Icon StoragePool = {"\xef\x82\x9c"};
constexpr Icon StorageRequest = {"\xef\x82\x9d"};
constexpr Icon Store = {"\xef\x82\x9e"};
constexpr Icon StormTracker = {"\xef\x82\x9f"};
constexpr Icon StrategyPlay = {"\xef\x82\xa0"};
constexpr Icon Strawberry = {"\xef\x82\xa1"};
constexpr Icon StringInteger = {"\xef\x82\xa2"};
constexpr Icon StringText = {"\xef\x82\xa3"};
constexpr Icon Subclassification = {"\xef\x82\xa4"};
constexpr Icon Subdirectory = {"\xef\x82\xa5"};
namespace Subflow {
constexpr Icon Unnamed = {"\xef\x82\xa6"};
constexpr Icon Local = {"\xef\x82\xa7"};
}  // namespace Subflow

namespace Subject {
constexpr Icon Definition = {"\xef\x82\xa8"};
constexpr Icon Usage = {"\xef\x82\xa9"};
}  // namespace Subject

constexpr Icon SubnetAclRules = {"\xef\x82\xaa"};
namespace Subtract {
constexpr Icon Unnamed = {"\xef\x82\xab"};
constexpr Icon Alt = {"\xef\x82\xac"};
constexpr Icon Filled = {"\xef\x82\xad"};
constexpr Icon Large = {"\xef\x82\xae"};
}  // namespace Subtract

constexpr Icon Succession = {"\xef\x82\xaf"};
namespace Summary {
namespace Kpi {
constexpr Icon Unnamed = {"\xef\x82\xb0"};
constexpr Icon Mirror = {"\xef\x82\xb1"};
}  // namespace Kpi

}  // namespace Summary

constexpr Icon Sun = {"\xef\x82\xb2"};
constexpr Icon Sunrise = {"\xef\x82\xb3"};
constexpr Icon Sunset = {"\xef\x82\xb4"};
constexpr Icon SupportVectorMachine = {"\xef\x82\xb5"};
constexpr Icon Sustainability = {"\xef\x82\xb6"};
constexpr Icon Svg = {"\xef\x82\xb7"};
constexpr Icon Swim = {"\xef\x82\xb8"};
constexpr Icon Switcher = {"\xef\x82\xb9"};
constexpr Icon SwitchLayer2 = {"\xef\x82\xba"};
constexpr Icon SwitchLayer3 = {"\xef\x82\xbb"};
constexpr Icon SyncSettings = {"\xef\x82\xbc"};
namespace Sysplex {
constexpr Icon Distributor = {"\xef\x82\xbd"};
}

constexpr Icon SysProvision = {"\xef\x82\xbe"};
namespace Table {
constexpr Icon Unnamed = {"\xef\x82\xbf"};
constexpr Icon Alias = {"\xef\x83\x80"};
constexpr Icon Built = {"\xef\x83\x81"};
constexpr Icon Shortcut = {"\xef\x83\x83"};
constexpr Icon Split = {"\xef\x83\x84"};
}  // namespace Table

constexpr Icon TableOfContents = {"\xef\x83\x82"};
namespace Tablet {
constexpr Icon Unnamed = {"\xef\x83\x85"};
constexpr Icon Landscape = {"\xef\x83\x86"};
}  // namespace Tablet

namespace Tag {
constexpr Icon Unnamed = {"\xef\x83\x87"};
constexpr Icon Edit = {"\xef\x83\x88"};
constexpr Icon Export = {"\xef\x83\x89"};
constexpr Icon Group = {"\xef\x83\x8a"};
constexpr Icon Import = {"\xef\x83\x8b"};
constexpr Icon None = {"\xef\x83\x8c"};
}  // namespace Tag

constexpr Icon Tank = {"\xef\x83\x8d"};
namespace Task {
constexpr Icon Unnamed = {"\xef\x83\x8e"};
constexpr Icon Add = {"\xef\x83\x8f"};
constexpr Icon Approved = {"\xef\x83\x90"};
constexpr Icon AssetView = {"\xef\x83\x91"};
constexpr Icon Complete = {"\xef\x83\x92"};
constexpr Icon Location = {"\xef\x83\x93"};
constexpr Icon Remove = {"\xef\x83\x94"};
constexpr Icon Settings = {"\xef\x83\x95"};
constexpr Icon Star = {"\xef\x83\x96"};
constexpr Icon Tools = {"\xef\x83\x97"};
constexpr Icon View = {"\xef\x83\x98"};
}  // namespace Task

constexpr Icon Taste = {"\xef\x83\x99"};
constexpr Icon Taxi = {"\xef\x83\x9a"};
constexpr Icon TcpIpService = {"\xef\x83\x9b"};
namespace Temperature {
constexpr Icon Unnamed = {"\xef\x83\x9c"};
namespace Celsius {
constexpr Icon Unnamed = {"\xef\x83\x9d"};
constexpr Icon Alt = {"\xef\x83\x9e"};
}  // namespace Celsius

namespace Fahrenheit {
constexpr Icon Unnamed = {"\xef\x83\x9f"};
constexpr Icon Alt = {"\xef\x83\xa0"};
}  // namespace Fahrenheit

constexpr Icon FeelsLike = {"\xef\x83\xa1"};
constexpr Icon Frigid = {"\xef\x83\xa2"};
constexpr Icon Hot = {"\xef\x83\xa3"};
constexpr Icon Inversion = {"\xef\x83\xa4"};
constexpr Icon Max = {"\xef\x83\xa5"};
constexpr Icon Min = {"\xef\x83\xa6"};
constexpr Icon Water = {"\xef\x83\xa7"};
}  // namespace Temperature

constexpr Icon Template = {"\xef\x83\xa8"};
constexpr Icon Tennis = {"\xef\x83\xa9"};
constexpr Icon TennisBall = {"\xef\x83\xaa"};
namespace Term {
constexpr Icon Unnamed = {"\xef\x83\xab"};
constexpr Icon Reference = {"\xef\x83\xae"};
}  // namespace Term

namespace Terminal {
constexpr Icon Unnamed = {"\xef\x83\xac"};
constexpr Icon _3270 = {"\xef\x83\xad"};
}  // namespace Terminal

constexpr Icon TestTool = {"\xef\x83\xaf"};
namespace Text {
namespace Align {
constexpr Icon Center = {"\xef\x83\xb0"};
constexpr Icon Justify = {"\xef\x83\xb1"};
constexpr Icon Left = {"\xef\x83\xb2"};
constexpr Icon Mixed = {"\xef\x83\xb3"};
constexpr Icon Right = {"\xef\x83\xb4"};
}  // namespace Align

constexpr Icon AllCaps = {"\xef\x83\xb5"};
constexpr Icon Bold = {"\xef\x83\xb6"};
constexpr Icon ClearFormat = {"\xef\x83\xb7"};
constexpr Icon Color = {"\xef\x83\xb8"};
constexpr Icon Creation = {"\xef\x83\xb9"};
constexpr Icon Fill = {"\xef\x83\xba"};
constexpr Icon Font = {"\xef\x83\xbb"};
constexpr Icon Footnote = {"\xef\x83\xbc"};
constexpr Icon Highlight = {"\xef\x83\xbd"};
namespace Indent {
constexpr Icon Unnamed = {"\xef\x83\xbe"};
constexpr Icon Less = {"\xef\x83\xbf"};
constexpr Icon More = {"\xef\x84\x80"};
}  // namespace Indent

constexpr Icon Italic = {"\xef\x84\x81"};
constexpr Icon Kerning = {"\xef\x84\x82"};
constexpr Icon Leading = {"\xef\x84\x83"};
constexpr Icon LineSpacing = {"\xef\x84\x84"};
constexpr Icon LongParagraph = {"\xef\x84\x87"};
constexpr Icon NewLine = {"\xef\x84\x8a"};
constexpr Icon Scale = {"\xef\x84\x8b"};
constexpr Icon Selection = {"\xef\x84\x8c"};
constexpr Icon ShortParagraph = {"\xef\x84\x8d"};
constexpr Icon SmallCaps = {"\xef\x84\x8e"};
constexpr Icon Strikethrough = {"\xef\x84\x8f"};
constexpr Icon Subscript = {"\xef\x84\x90"};
constexpr Icon Superscript = {"\xef\x84\x91"};
constexpr Icon Tracking = {"\xef\x84\x92"};
constexpr Icon Underline = {"\xef\x84\x93"};
constexpr Icon VerticalAlignment = {"\xef\x84\x94"};
constexpr Icon Wrap = {"\xef\x84\x95"};
}  // namespace Text

namespace TextLink {
constexpr Icon Unnamed = {"\xef\x84\x85"};
constexpr Icon Analysis = {"\xef\x84\x86"};
}  // namespace TextLink

namespace TextMining {
constexpr Icon Unnamed = {"\xef\x84\x88"};
constexpr Icon Applier = {"\xef\x84\x89"};
}  // namespace TextMining

constexpr Icon Theater = {"\xef\x84\x96"};
constexpr Icon ThisSideUp = {"\xef\x84\x97"};
namespace Thumbnail {
constexpr Icon _1 = {"\xef\x84\x98"};
constexpr Icon _2 = {"\xef\x84\x99"};
}  // namespace Thumbnail

namespace ThumbsDown {
constexpr Icon Unnamed = {"\xef\x84\x9a"};
constexpr Icon Filled = {"\xef\x84\x9b"};
}  // namespace ThumbsDown

namespace ThumbsUp {
constexpr Icon Unnamed = {"\xef\x84\x9c"};
constexpr Icon Filled = {"\xef\x84\x9f"};
}  // namespace ThumbsUp

namespace ThumbsUpDouble {
constexpr Icon Unnamed = {"\xef\x84\x9d"};
constexpr Icon Filled = {"\xef\x84\x9e"};
}  // namespace ThumbsUpDouble

namespace Thunderstorm {
constexpr Icon Unnamed = {"\xef\x84\xa0"};
namespace Scattered {
constexpr Icon Unnamed = {"\xef\x84\xa1"};
constexpr Icon Night = {"\xef\x84\xa2"};
}  // namespace Scattered

constexpr Icon Severe = {"\xef\x84\xa3"};
constexpr Icon Strong = {"\xef\x84\xa4"};
}  // namespace Thunderstorm

constexpr Icon Ticket = {"\xef\x84\xa5"};
constexpr Icon Tides = {"\xef\x84\xa6"};
constexpr Icon Tif = {"\xef\x84\xa7"};
namespace Time {
constexpr Icon Unnamed = {"\xef\x84\xa8"};
constexpr Icon Filled = {"\xef\x84\xa9"};
}  // namespace Time

constexpr Icon TimePlot = {"\xef\x84\xaa"};
constexpr Icon Timer = {"\xef\x84\xab"};
constexpr Icon TimingBelt = {"\xef\x84\xac"};
constexpr Icon ToolBox = {"\xef\x84\xad"};
constexpr Icon ToolKit = {"\xef\x84\xae"};
namespace Tools {
constexpr Icon Unnamed = {"\xef\x84\xaf"};
constexpr Icon Alt = {"\xef\x84\xb0"};
}  // namespace Tools

constexpr Icon Tornado = {"\xef\x84\xb1"};
constexpr Icon TornadoWarning = {"\xef\x84\xb2"};
namespace Touch {
namespace _1 {
constexpr Icon Unnamed = {"\xef\x84\xb3"};
constexpr Icon Filled = {"\xef\x84\xb6"};
}  // namespace _1

namespace _1Down {
constexpr Icon Unnamed = {"\xef\x84\xb4"};
constexpr Icon Filled = {"\xef\x84\xb5"};
}  // namespace _1Down

namespace _2 {
constexpr Icon Unnamed = {"\xef\x84\xb7"};
constexpr Icon Filled = {"\xef\x84\xb8"};
}  // namespace _2

constexpr Icon Interaction = {"\xef\x84\xb9"};
}  // namespace Touch

constexpr Icon Tour = {"\xef\x84\xba"};
constexpr Icon TrafficCone = {"\xef\x84\xbb"};
namespace Traffic {
constexpr Icon Event = {"\xef\x84\xbc"};
constexpr Icon Flow = {"\xef\x84\xbd"};
constexpr Icon FlowIncident = {"\xef\x84\xbe"};
constexpr Icon Incident = {"\xef\x84\xbf"};
constexpr Icon WeatherIncident = {"\xef\x85\x80"};
}  // namespace Traffic

namespace Train {
constexpr Icon Unnamed = {"\xef\x85\x81"};
constexpr Icon Heart = {"\xef\x85\x82"};
constexpr Icon Profile = {"\xef\x85\x83"};
constexpr Icon Speed = {"\xef\x85\x84"};
constexpr Icon Ticket = {"\xef\x85\x85"};
constexpr Icon Time = {"\xef\x85\x86"};
}  // namespace Train

constexpr Icon Tram = {"\xef\x85\x87"};
namespace Transform {
constexpr Icon Binary = {"\xef\x85\x88"};
constexpr Icon Code = {"\xef\x85\x89"};
constexpr Icon Instructions = {"\xef\x85\x8a"};
constexpr Icon Language = {"\xef\x85\x8b"};
}  // namespace Transform

constexpr Icon Transgender = {"\xef\x85\x8c"};
constexpr Icon Translate = {"\xef\x85\x8d"};
constexpr Icon TransmissionLte = {"\xef\x85\x8e"};
constexpr Icon Transpose = {"\xef\x85\x8f"};
constexpr Icon TrashCan = {"\xef\x85\x90"};
namespace Tree {
constexpr Icon Unnamed = {"\xef\x85\x91"};
constexpr Icon FallRisk = {"\xef\x85\x92"};
}  // namespace Tree

namespace TreeView {
constexpr Icon Unnamed = {"\xef\x85\x93"};
constexpr Icon Alt = {"\xef\x85\x94"};
}  // namespace TreeView

namespace Triangle {
namespace Down {
constexpr Icon Outline = {"\xef\x85\x95"};
constexpr Icon Solid = {"\xef\x85\x96"};
}  // namespace Down

namespace Left {
constexpr Icon Outline = {"\xef\x85\x97"};
constexpr Icon Solid = {"\xef\x85\x98"};
}  // namespace Left

constexpr Icon Outline = {"\xef\x85\x99"};
namespace Right {
constexpr Icon Outline = {"\xef\x85\x9a"};
constexpr Icon Solid = {"\xef\x85\x9b"};
}  // namespace Right

constexpr Icon Solid = {"\xef\x85\x9c"};
}  // namespace Triangle

constexpr Icon Trigger = {"\xef\x85\x9d"};
namespace Trophy {
constexpr Icon Unnamed = {"\xef\x85\x9e"};
constexpr Icon Filled = {"\xef\x85\x9f"};
}  // namespace Trophy

namespace TropicalStorm {
constexpr Icon Unnamed = {"\xef\x85\xa0"};
constexpr Icon ModelTracks = {"\xef\x85\xa1"};
constexpr Icon Tracks = {"\xef\x85\xa2"};
}  // namespace TropicalStorm

constexpr Icon TropicalWarning = {"\xef\x85\xa3"};
constexpr Icon Tsq = {"\xef\x85\xa4"};
constexpr Icon Tsunami = {"\xef\x85\xa5"};
constexpr Icon Tsv = {"\xef\x85\xa6"};
constexpr Icon Tuning = {"\xef\x85\xa7"};
constexpr Icon TwoFactorAuthentication = {"\xef\x85\xa8"};
constexpr Icon TwoPersonLift = {"\xef\x85\xa9"};
namespace Txt {
constexpr Icon Unnamed = {"\xef\x85\xaa"};
constexpr Icon Reference = {"\xef\x85\xab"};
}  // namespace Txt

constexpr Icon TypePattern = {"\xef\x85\xac"};
constexpr Icon Types = {"\xef\x85\xad"};
constexpr Icon Umbrella = {"\xef\x85\xae"};
namespace Undefined {
constexpr Icon Unnamed = {"\xef\x85\xaf"};
constexpr Icon Filled = {"\xef\x85\xb0"};
}  // namespace Undefined

constexpr Icon Undo = {"\xef\x85\xb1"};
constexpr Icon UngroupObjects = {"\xef\x85\xb2"};
namespace Unknown {
constexpr Icon Unnamed = {"\xef\x85\xb3"};
constexpr Icon Filled = {"\xef\x85\xb4"};
}  // namespace Unknown

constexpr Icon Unlink = {"\xef\x85\xb5"};
constexpr Icon Unlocked = {"\xef\x85\xb6"};
constexpr Icon Unsaved = {"\xef\x85\xb7"};
constexpr Icon UpdateNow = {"\xef\x85\xb8"};
constexpr Icon Upgrade = {"\xef\x85\xb9"};
constexpr Icon Upload = {"\xef\x85\xba"};
constexpr Icon Upstream = {"\xef\x85\xbb"};
constexpr Icon UpToTop = {"\xef\x85\xbc"};
constexpr Icon Url = {"\xef\x85\xbd"};
namespace Usage {
constexpr Icon IncludedUseCase = {"\xef\x85\xbe"};
}

constexpr Icon Usb = {"\xef\x85\xbf"};
namespace UseCase {
constexpr Icon Definition = {"\xef\x86\x80"};
constexpr Icon Usage = {"\xef\x86\x81"};
}  // namespace UseCase

namespace User {
constexpr Icon Unnamed = {"\xef\x86\x82"};
constexpr Icon Access = {"\xef\x86\x83"};
constexpr Icon AccessLocked = {"\xef\x86\x84"};
constexpr Icon AccessUnlocked = {"\xef\x86\x85"};
constexpr Icon Activity = {"\xef\x86\x86"};
constexpr Icon Admin = {"\xef\x86\x87"};
namespace Avatar {
constexpr Icon Unnamed = {"\xef\x86\x88"};
namespace Filled {
constexpr Icon Unnamed = {"\xef\x86\x89"};
constexpr Icon Alt = {"\xef\x86\x8a"};
}  // namespace Filled

}  // namespace Avatar

constexpr Icon Certification = {"\xef\x86\x8b"};
constexpr Icon Data = {"\xef\x86\x8c"};
namespace Favorite {
constexpr Icon Unnamed = {"\xef\x86\x8d"};
namespace Alt {
constexpr Icon Unnamed = {"\xef\x86\x8e"};
constexpr Icon Filled = {"\xef\x86\x8f"};
}  // namespace Alt

}  // namespace Favorite

constexpr Icon Feedback = {"\xef\x86\x90"};
constexpr Icon Filled = {"\xef\x86\x91"};
constexpr Icon Follow = {"\xef\x86\x92"};
constexpr Icon Identification = {"\xef\x86\x93"};
constexpr Icon Military = {"\xef\x86\x94"};
constexpr Icon Multiple = {"\xef\x86\x95"};
constexpr Icon Online = {"\xef\x86\x96"};
constexpr Icon Profile = {"\xef\x86\x97"};
constexpr Icon Role = {"\xef\x86\x99"};
constexpr Icon Service = {"\xef\x86\x9a"};
constexpr Icon ServiceDesk = {"\xef\x86\x9b"};
constexpr Icon Settings = {"\xef\x86\x9c"};
constexpr Icon Simulation = {"\xef\x86\x9d"};
constexpr Icon Speaker = {"\xef\x86\x9e"};
constexpr Icon Sponsor = {"\xef\x86\x9f"};
constexpr Icon XRay = {"\xef\x86\xa0"};
}  // namespace User

namespace UserProfile {
constexpr Icon Alt = {"\xef\x86\x98"};
}

namespace UvIndex {
constexpr Icon Unnamed = {"\xef\x86\xa1"};
constexpr Icon Alt = {"\xef\x86\xa2"};
constexpr Icon Filled = {"\xef\x86\xa3"};
}  // namespace UvIndex

namespace Value {
constexpr Icon Variable = {"\xef\x86\xa4"};
}

constexpr Icon Van = {"\xef\x86\xa5"};
namespace Vegetation {
constexpr Icon Asset = {"\xef\x86\xa6"};
constexpr Icon Encroachment = {"\xef\x86\xa7"};
constexpr Icon Height = {"\xef\x86\xa8"};
}  // namespace Vegetation

namespace Vehicle {
constexpr Icon Api = {"\xef\x86\xa9"};
constexpr Icon Connected = {"\xef\x86\xaa"};
constexpr Icon Insights = {"\xef\x86\xab"};
constexpr Icon Services = {"\xef\x86\xac"};
}  // namespace Vehicle

namespace Version {
constexpr Icon Unnamed = {"\xef\x86\xad"};
constexpr Icon Major = {"\xef\x86\xae"};
constexpr Icon Minor = {"\xef\x86\xaf"};
constexpr Icon Patch = {"\xef\x86\xb0"};
}  // namespace Version

constexpr Icon VerticalView = {"\xef\x86\xb1"};
namespace Video {
constexpr Icon Unnamed = {"\xef\x86\xb2"};
constexpr Icon Add = {"\xef\x86\xb3"};
constexpr Icon Chat = {"\xef\x86\xb4"};
constexpr Icon Filled = {"\xef\x86\xb5"};
namespace Off {
constexpr Icon Unnamed = {"\xef\x86\xb6"};
constexpr Icon Filled = {"\xef\x86\xb7"};
}  // namespace Off

}  // namespace Video

constexpr Icon VideoPlayer = {"\xef\x86\xb8"};
namespace View {
constexpr Icon Unnamed = {"\xef\x86\xb9"};
constexpr Icon Filled = {"\xef\x86\xba"};
constexpr Icon Mode1 = {"\xef\x86\xbb"};
constexpr Icon Mode2 = {"\xef\x86\xbc"};
namespace Off {
constexpr Icon Unnamed = {"\xef\x86\xbe"};
constexpr Icon Filled = {"\xef\x86\xbf"};
}  // namespace Off

}  // namespace View

constexpr Icon ViewNext = {"\xef\x86\xbd"};
namespace VirtualColumn {
constexpr Icon Unnamed = {"\xef\x87\x80"};
constexpr Icon Key = {"\xef\x87\x81"};
}  // namespace VirtualColumn

constexpr Icon VirtualDesktop = {"\xef\x87\x82"};
constexpr Icon VirtualMachine = {"\xef\x87\x83"};
namespace VirtualPrivateCloud {
constexpr Icon Unnamed = {"\xef\x87\x84"};
constexpr Icon Alt = {"\xef\x87\x85"};
}  // namespace VirtualPrivateCloud

constexpr Icon VisualRecognition = {"\xef\x87\x86"};
namespace Vlan {
constexpr Icon Unnamed = {"\xef\x87\x87"};
constexpr Icon Ibm = {"\xef\x87\x88"};
}  // namespace Vlan

constexpr Icon VmdkDisk = {"\xef\x87\x89"};
constexpr Icon VoiceActivate = {"\xef\x87\x8a"};
constexpr Icon Voicemail = {"\xef\x87\x8b"};
namespace Volume {
constexpr Icon BlockStorage = {"\xef\x87\x8c"};
namespace Down {
constexpr Icon Unnamed = {"\xef\x87\x8d"};
constexpr Icon Alt = {"\xef\x87\x8e"};
namespace Filled {
constexpr Icon Unnamed = {"\xef\x87\x8f"};
constexpr Icon Alt = {"\xef\x87\x90"};
}  // namespace Filled

}  // namespace Down

constexpr Icon FileStorage = {"\xef\x87\x91"};
namespace Mute {
constexpr Icon Unnamed = {"\xef\x87\x92"};
constexpr Icon Filled = {"\xef\x87\x93"};
}  // namespace Mute

constexpr Icon ObjectStorage = {"\xef\x87\x94"};
namespace Up {
constexpr Icon Unnamed = {"\xef\x87\x95"};
constexpr Icon Alt = {"\xef\x87\x96"};
namespace Filled {
constexpr Icon Unnamed = {"\xef\x87\x97"};
constexpr Icon Alt = {"\xef\x87\x98"};
}  // namespace Filled

}  // namespace Up

}  // namespace Volume

namespace Vpn {
constexpr Icon Unnamed = {"\xef\x87\x99"};
constexpr Icon Connection = {"\xef\x87\x9a"};
constexpr Icon Policy = {"\xef\x87\x9b"};
}  // namespace Vpn

constexpr Icon Wallet = {"\xef\x87\x9c"};
namespace Warning {
constexpr Icon Unnamed = {"\xef\x87\x9d"};
namespace Alt {
constexpr Icon Unnamed = {"\xef\x87\x9e"};
constexpr Icon Filled = {"\xef\x87\x9f"};
}  // namespace Alt

namespace AltInverted {
constexpr Icon Unnamed = {"\xef\x87\xa0"};
constexpr Icon Filled = {"\xef\x87\xa1"};
}  // namespace AltInverted

constexpr Icon Diamond = {"\xef\x87\xa2"};
constexpr Icon Filled = {"\xef\x87\xa3"};
namespace Hex {
constexpr Icon Unnamed = {"\xef\x87\xa4"};
constexpr Icon Filled = {"\xef\x87\xa5"};
}  // namespace Hex

constexpr Icon Multiple = {"\xef\x87\xa6"};
constexpr Icon Other = {"\xef\x87\xa7"};
}  // namespace Warning

namespace WarningSquare {
constexpr Icon Unnamed = {"\xef\x87\xa8"};
constexpr Icon Filled = {"\xef\x87\xa9"};
}  // namespace WarningSquare

constexpr Icon Watch = {"\xef\x87\xaa"};
namespace Watson {
constexpr Icon Unnamed = {"\xef\x87\xab"};
constexpr Icon MachineLearning = {"\xef\x87\xac"};
}  // namespace Watson

constexpr Icon Watsonx = {"\xef\x87\xad"};
constexpr Icon WatsonxAi = {"\xef\x87\xae"};
constexpr Icon WatsonxData = {"\xef\x87\xaf"};
constexpr Icon WatsonxGovernance = {"\xef\x87\xb0"};
constexpr Icon WaveDirection = {"\xef\x87\xb1"};
constexpr Icon WaveHeight = {"\xef\x87\xb2"};
constexpr Icon WavePeriod = {"\xef\x87\xb3"};
namespace WeatherFront {
constexpr Icon Cold = {"\xef\x87\xb4"};
constexpr Icon Stationary = {"\xef\x87\xb5"};
constexpr Icon Warm = {"\xef\x87\xb6"};
}  // namespace WeatherFront

constexpr Icon WeatherStation = {"\xef\x87\xb7"};
constexpr Icon Webhook = {"\xef\x87\xb8"};
namespace WebServices {
constexpr Icon Cluster = {"\xef\x87\xb9"};
constexpr Icon Container = {"\xef\x87\xba"};
constexpr Icon Definition = {"\xef\x87\xbb"};
constexpr Icon Service = {"\xef\x87\xbc"};
constexpr Icon Task = {"\xef\x87\xbd"};
constexpr Icon TaskDefinitionVersion = {"\xef\x87\xbe"};
}  // namespace WebServices

constexpr Icon Websheet = {"\xef\x87\xbf"};
constexpr Icon Wheat = {"\xef\x88\x80"};
constexpr Icon WhitePaper = {"\xef\x88\x81"};
namespace Wifi {
constexpr Icon Unnamed = {"\xef\x88\x82"};
constexpr Icon Controller = {"\xef\x88\x85"};
constexpr Icon NotSecure = {"\xef\x88\x86"};
constexpr Icon Off = {"\xef\x88\x87"};
constexpr Icon Secure = {"\xef\x88\x88"};
}  // namespace Wifi

namespace WifiBridge {
constexpr Icon Unnamed = {"\xef\x88\x83"};
constexpr Icon Alt = {"\xef\x88\x84"};
}  // namespace WifiBridge

constexpr Icon Wikis = {"\xef\x88\x89"};
constexpr Icon WindGusts = {"\xef\x88\x8a"};
constexpr Icon WindPower = {"\xef\x88\x8b"};
constexpr Icon WindStream = {"\xef\x88\x8c"};
namespace Windy {
constexpr Icon Unnamed = {"\xef\x88\x8d"};
constexpr Icon Dust = {"\xef\x88\x8e"};
constexpr Icon Snow = {"\xef\x88\x8f"};
constexpr Icon Strong = {"\xef\x88\x90"};
}  // namespace Windy

constexpr Icon WinterWarning = {"\xef\x88\x91"};
constexpr Icon WintryMix = {"\xef\x88\x92"};
constexpr Icon WirelessCheckout = {"\xef\x88\x93"};
constexpr Icon Wmv = {"\xef\x88\x94"};
constexpr Icon WordCloud = {"\xef\x88\x95"};
constexpr Icon WorkflowAutomation = {"\xef\x88\x96"};
namespace Workspace {
constexpr Icon Unnamed = {"\xef\x88\x97"};
constexpr Icon Import = {"\xef\x88\x98"};
}  // namespace Workspace

namespace Worship {
constexpr Icon Unnamed = {"\xef\x88\x99"};
constexpr Icon Christian = {"\xef\x88\x9a"};
constexpr Icon Jewish = {"\xef\x88\x9b"};
constexpr Icon Muslim = {"\xef\x88\x9c"};
}  // namespace Worship

constexpr Icon XAxis = {"\xef\x88\x9d"};
constexpr Icon Xls = {"\xef\x88\x9e"};
constexpr Icon Xml = {"\xef\x88\x9f"};
constexpr Icon YAxis = {"\xef\x88\xa0"};
constexpr Icon ZAxis = {"\xef\x88\xa1"};
namespace Zip {
constexpr Icon Unnamed = {"\xef\x88\xa2"};
constexpr Icon Reference = {"\xef\x88\xa3"};
}  // namespace Zip

namespace Z {
constexpr Icon Lpar = {"\xef\x88\xa4"};
constexpr Icon Systems = {"\xef\x88\xae"};
}  // namespace Z

namespace Zoom {
constexpr Icon Area = {"\xef\x88\xa5"};
constexpr Icon Fit = {"\xef\x88\xa6"};
constexpr Icon In = {"\xef\x88\xa7"};
constexpr Icon InArea = {"\xef\x88\xa8"};
constexpr Icon Out = {"\xef\x88\xa9"};
constexpr Icon OutArea = {"\xef\x88\xaa"};
constexpr Icon Reset = {"\xef\x88\xab"};
}  // namespace Zoom

namespace Zos {
constexpr Icon Unnamed = {"\xef\x88\xac"};
constexpr Icon Sysplex = {"\xef\x88\xad"};
}  // namespace Zos

}  // namespace CarbonIcons
