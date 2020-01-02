//
//  ViewController.swift
//  Swift for MacOS App
//
//  Created by tautau on 2019/12/31.
//  Copyright © 2019 tautau. All rights reserved.
//

import Cocoa


class ViewController: NSViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        var device:Device?
        let uartController = UART()
        for path in uartController.uartList() {
            guard let path = path as? String else {continue}
            print(path)
            guard path.contains("serial") else {continue}
            device = Device(path, speed: 115200, flowCtrl: false, parityCtrl: false)
        }
        if let device = device {
            device.write(toDevice: "hello")
            print("Resp:\(device.readFromDevice())")
        }
    }

    override var representedObject: Any? {
        didSet {
        // Update the view, if already loaded.
        }
    }


}

