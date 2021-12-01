using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aluguel_de_Carros . Entidades
{
    class AlugueldeCarro
    class Veiculo
    class fatura
    {
        public DateTime Start { get; set; }
        public DateTime Finish { get; set; }
        public Veiculo Vehicle { get; private set; }
        public Fatura Invoice { get; set; }
        public AlugueldeCarro(DateTime start, DateTime finish, Veiculo vehicle)
        {
            Start = start;
            Finish = finish;
            Vehicle = vehicle;
            Invoice = null;
        }
    }
}