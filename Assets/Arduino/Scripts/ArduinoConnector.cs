using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO.Ports;
using System.Threading;

public class ArduinoConnector : MonoBehaviour
{
    SerialPort sp = new SerialPort("COM5", 9600);

    private void Start()
    {
        sp.Open();
        sp.ReadTimeout = 10;
    }

    public void GetDataFromArduino()
    {
        if (sp.IsOpen)
        {
            try
            {
                EditDataFromArduino(sp.ReadLine());
            }
            catch (System.Exception)
            {
            }
        }
    }

    public void EditDataFromArduino(string message)
    {
        Debug.Log(message);
    }

    public void SendData(string message)
    {
        sp.Write(message);
    }

    void OnApplicationQuit()
    {
        SendData("f");
        sp.Close();
    }

}