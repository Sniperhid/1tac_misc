class CfgMarkerBrushes 
{
	class Solid;
	class BDiagonal: Solid {};
	class DiagGrid: Solid {};
	class FDiagonal: Solid {};
	class Grid: Solid {};
	class Horizontal: Solid {};
	class Vertical: Solid {};
	class Cross: Solid {};
	class BDiagonalBorder: BDiagonal 
	{
		drawBorder = 1;
		name = "Backward diagonal (Border)";
	};
	class DiagGridBorder: DiagGrid 
	{
		drawBorder = 1;
		name = "Grid diagonal (Border)";
	};
	class FDiagonalBorder: FDiagonal
	{
		drawBorder = 1;
		name = "Forward diagonal (Border)";
	};
	class GridBorder: Grid
	{
		drawBorder = 1;
		name = "Grid (Border)";
	};
	class HorizontalBorder: Horizontal
	{
		drawBorder = 1;
		name = "Horizontal (Border)";
	};
	class VerticalBorder: Vertical 
	{
		drawBorder = 1;
		name = "Vertical (Border)";
	};
	class CrossBorder: Cross 
	{
		drawBorder = 1;
		name = "Cross (Border)";
	};
};