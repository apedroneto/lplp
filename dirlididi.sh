echo "####################################"
ls
echo "####################################"

echo "Digite o codigo da questao SEUNOME :"
read codigo

echo "Digite o nome do arquivo executavel:"
read executavel 

echo "Digite o nome do arquivo codigo fonte:"
read codigoFonte 


echo "##################################################"
echo "##################################################"
echo "##############AGUARDANDO RESULTADO################"
echo "##################################################"
echo "##################################################"
python dirlididi.py submit $codigo SEUCODIGO $executavel $codigoFonte 


