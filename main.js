var x = 0;
var y = 0;

var feldSize = 20;

var Felder = [];

function Pixel(x,y) {
	this.x = x;
	this.y = y;

	this.node = document.createElement('div');
	this.node.className = 'feld';
	this.node.style.left = (this.x * feldSize) + 'px';
	this.node.style.top = (this.y * feldSize) + 'px';
	$("#container").append(this.node);
	
	Felder.push(this.node);
	console.debug(this.node);
}

function init() {
  for(var i = 0;i<y;i++)
  {
  	for(var j=0;j<x;j++)
  	{
  		var feld = new Pixel(j,i);
  	}
  }
}



$("#go").click(function(){
        x = parseInt($("#x").val());
        y = parseInt($("#y").val());

        $(".begin").remove();

        init();
    });    