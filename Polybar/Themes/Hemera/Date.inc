[Variables]
Date_X =988
;Left, Right or Middle
Date_Anchor = Left

[Metadata]
Name=Papirus\\Date
Author=reddit.com/u/khanhas
Description=Display Date.

[DateAnchor]
Measure=String
String = #Date_Anchor#
IfMatch = Center|center|Middle|middle
IfMatchAction = [!SetOption Date StringAlign CenterCenter]
IfMatch2 = Right|right
IfMatchAction2 = [!SetOption Date StringAlign RightCenter]

[MeasureDate]
Measure=Time
Format=%a %e

[DateShape]
Meter=Shape
X=(#Bar_OffsetX#+#Date_X#)
Y=(#Bar_OffsetY#+#Bar_Height#/2-#Section_Height#/2)
Shape =Rectangle -20,0,([Date:W]+40),#Section_Height#,#Corner_Radius# | StrokeWidth 0 | Fill Color #Color_Scheme1#
DynamicVariables=1

[Date]
Meter=String
MeasureName=MeasureDate
FontFace=#Font_Face2#
FontSize=#Font_Size#
FontColor=#Color_Scheme2#
AntiAlias=1
StringAlign=LeftCenter
X=(#Bar_OffsetX# + #Date_X#)
Y=(#Bar_OffsetY#+#Bar_Height#/2+2)
;LeftMouseUpAction=[explorer.exe shell:appsFolder\Microsoft.WindowsAlarms_8wekyb3d8bbwe!App]
DynamicVariables=1
