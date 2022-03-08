/*******************************************************************************
* File Name: cycfg_usbdev.c
*
* Description:
* USB Device middleware configuration
* This file should not be modified. It was automatically generated by
* USB Configurator 2.30.0.4366
*
********************************************************************************
* \copyright
* Copyright 2022 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#include "cycfg_usbdev.h"

/*******************************************************************************
*                       Device Descriptors Initialization
*******************************************************************************/

static uint8_t const usb_deviceDescriptors[] = 
{
/******************************************************************************/
/* Device Descriptor                                                          */
/******************************************************************************/
/* bLength */                                                             0x12U, 
/* bDescriptorType */                                                     0x01U, 
/* bcdUSB */                                                       0x00U, 0x02U, 
/* bDeviceClass */                                                        0x02U, 
/* bDeviceSubClass */                                                     0x00U, 
/* bDeviceProtocol */                                                     0x00U, 
/* bMaxPacketSize */                                                      0x08U, 
/* idVendor */                                                     0xB4U, 0x04U, 
/* idProduct */                                                    0x1DU, 0xF2U, 
/* bcdDevice */                                                    0x00U, 0x00U, 
/* iManufacturer */                                                       0x01U, 
/* iProduct */                                                            0x02U, 
/* iSerialNumber */                                                       0x00U, 
/* bNumConfigurations */                                                  0x01U, 
};

static uint8_t const usb_configurationDescriptors[] = 
{
/******************************************************************************/
/* Configuration Descriptor                                                   */
/******************************************************************************/
/* bLength */                                                             0x09U, 
/* bDescriptorType */                                                     0x02U, 
/* wTotalLength */                                                 0x43U, 0x00U, 
/* bNumInterfaces */                                                      0x02U, 
/* bConfigurationValue */                                                 0x01U, 
/* iConfiguration */                                                      0x00U, 
/* bmAttributes */                                                        0x80U, 
/* bMaxPower */                                                           0x19U, 

/******************************************************************************/
/* Communication Alternate Settings                                           */
/******************************************************************************/
/* bLength */                                                             0x09U, 
/* bDescriptorType */                                                     0x04U, 
/* bInterfaceNumber */                                                    0x00U, 
/* bAlternateSetting */                                                   0x00U, 
/* bNumEndpoints */                                                       0x01U, 
/* bInterfaceClass */                                                     0x02U, 
/* bInterfaceSubClass */                                                  0x02U, 
/* bInterfaceProtocol */                                                  0x01U, 
/* iInterface */                                                          0x03U, 

/******************************************************************************/
/* Header                                                                     */
/******************************************************************************/
/* bFunctionLength */                                                     0x05U, 
/* bDescriptorType */                                                     0x24U, 
/* bDescriptorSubtype */                                                  0x00U, 
/* bcdADC */                                                       0x10U, 0x01U, 

/******************************************************************************/
/* Abstract Control Management                                                */
/******************************************************************************/
/* bFunctionLength */                                                     0x04U, 
/* bDescriptorType */                                                     0x24U, 
/* bDescriptorSubtype */                                                  0x02U, 
/* bmCapabilities */                                                      0x02U, 

/******************************************************************************/
/* Union                                                                      */
/******************************************************************************/
/* bFunctionLength */                                                     0x05U, 
/* bDescriptorType */                                                     0x24U, 
/* bDescriptorSubtype */                                                  0x06U, 
/* bControlInterface */                                                   0x00U, 
/* bSubordinateInterface */                                               0x01U, 

/******************************************************************************/
/* Call Management                                                            */
/******************************************************************************/
/* bFunctionLength */                                                     0x05U, 
/* bDescriptorType */                                                     0x24U, 
/* bDescriptorSubtype */                                                  0x01U, 
/* bmCapabilities */                                                      0x00U, 
/* bDataInterface */                                                      0x01U, 

/******************************************************************************/
/* Endpoint Descriptor                                                        */
/******************************************************************************/
/* bLength */                                                             0x07U, 
/* bDescriptorType */                                                     0x05U, 
/* bEndpointAddress */                                                    0x81U, 
/* bmAttributes */                                                        0x03U, 
/* wMaxPacketSize */                                               0x08U, 0x00U, 
/* bInterval */                                                           0x0AU, 

/******************************************************************************/
/* Data Alternate Settings                                                    */
/******************************************************************************/
/* bLength */                                                             0x09U, 
/* bDescriptorType */                                                     0x04U, 
/* bInterfaceNumber */                                                    0x01U, 
/* bAlternateSetting */                                                   0x00U, 
/* bNumEndpoints */                                                       0x02U, 
/* bInterfaceClass */                                                     0x0AU, 
/* bInterfaceSubClass */                                                  0x00U, 
/* bInterfaceProtocol */                                                  0x00U, 
/* iInterface */                                                          0x04U, 

/******************************************************************************/
/* Endpoint Descriptor                                                        */
/******************************************************************************/
/* bLength */                                                             0x07U, 
/* bDescriptorType */                                                     0x05U, 
/* bEndpointAddress */                                                    0x82U, 
/* bmAttributes */                                                        0x02U, 
/* wMaxPacketSize */                                               0x40U, 0x00U, 
/* bInterval */                                                           0x00U, 

/******************************************************************************/
/* Endpoint Descriptor                                                        */
/******************************************************************************/
/* bLength */                                                             0x07U, 
/* bDescriptorType */                                                     0x05U, 
/* bEndpointAddress */                                                    0x03U, 
/* bmAttributes */                                                        0x02U, 
/* wMaxPacketSize */                                               0x40U, 0x00U, 
/* bInterval */                                                           0x00U, 
};

static uint8_t const usb_stringDescriptors[] = 
{
/******************************************************************************/
/* Language ID Descriptor                                                     */
/******************************************************************************/
/* bLength */                                                             0x04U, 
/* bDescriptorType */                                                     0x03U, 
/* wLANGID */                                                      0x09U, 0x04U, 

/******************************************************************************/
/* String Descriptor                                                          */
/******************************************************************************/
/* bLength */                                                             0x2CU, 
/* bDescriptorType */                                                     0x03U, 
/* bString */ 
    (uint8_t)'C', 0U, (uint8_t)'y', 0U, (uint8_t)'p', 0U, (uint8_t)'r', 0U,
    (uint8_t)'e', 0U, (uint8_t)'s', 0U, (uint8_t)'s', 0U, (uint8_t)' ', 0U,
    (uint8_t)'S', 0U, (uint8_t)'e', 0U, (uint8_t)'m', 0U, (uint8_t)'i', 0U,
    (uint8_t)'c', 0U, (uint8_t)'o', 0U, (uint8_t)'n', 0U, (uint8_t)'d', 0U,
    (uint8_t)'u', 0U, (uint8_t)'c', 0U, (uint8_t)'t', 0U, (uint8_t)'o', 0U,
    (uint8_t)'r', 0U,

/******************************************************************************/
/* String Descriptor                                                          */
/******************************************************************************/
/* bLength */                                                             0x22U, 
/* bDescriptorType */                                                     0x03U, 
/* bString */ 
    (uint8_t)'C', 0U, (uint8_t)'D', 0U, (uint8_t)'C', 0U, (uint8_t)' ', 0U,
    (uint8_t)'C', 0U, (uint8_t)'o', 0U, (uint8_t)'d', 0U, (uint8_t)'e', 0U,
    (uint8_t)' ', 0U, (uint8_t)'E', 0U, (uint8_t)'x', 0U, (uint8_t)'a', 0U,
    (uint8_t)'m', 0U, (uint8_t)'p', 0U, (uint8_t)'l', 0U, (uint8_t)'e', 0U,

/******************************************************************************/
/* String Descriptor                                                          */
/******************************************************************************/
/* bLength */                                                             0x38U, 
/* bDescriptorType */                                                     0x03U, 
/* bString */ 
    (uint8_t)'C', 0U, (uint8_t)'D', 0U, (uint8_t)'C', 0U, (uint8_t)' ', 0U,
    (uint8_t)'C', 0U, (uint8_t)'o', 0U, (uint8_t)'m', 0U, (uint8_t)'m', 0U,
    (uint8_t)'u', 0U, (uint8_t)'n', 0U, (uint8_t)'i', 0U, (uint8_t)'c', 0U,
    (uint8_t)'a', 0U, (uint8_t)'t', 0U, (uint8_t)'i', 0U, (uint8_t)'o', 0U,
    (uint8_t)'n', 0U, (uint8_t)' ', 0U, (uint8_t)'I', 0U, (uint8_t)'n', 0U,
    (uint8_t)'t', 0U, (uint8_t)'e', 0U, (uint8_t)'r', 0U, (uint8_t)'f', 0U,
    (uint8_t)'a', 0U, (uint8_t)'c', 0U, (uint8_t)'e', 0U,

/******************************************************************************/
/* String Descriptor                                                          */
/******************************************************************************/
/* bLength */                                                             0x26U, 
/* bDescriptorType */                                                     0x03U, 
/* bString */ 
    (uint8_t)'C', 0U, (uint8_t)'D', 0U, (uint8_t)'C', 0U, (uint8_t)' ', 0U,
    (uint8_t)'D', 0U, (uint8_t)'a', 0U, (uint8_t)'t', 0U, (uint8_t)'a', 0U,
    (uint8_t)' ', 0U, (uint8_t)'I', 0U, (uint8_t)'n', 0U, (uint8_t)'t', 0U,
    (uint8_t)'e', 0U, (uint8_t)'r', 0U, (uint8_t)'f', 0U, (uint8_t)'a', 0U,
    (uint8_t)'c', 0U, (uint8_t)'e', 0U,
};

/*******************************************************************************
*                       Device Structures Initialization
*******************************************************************************/

/* Endpoints array initialization */
static const cy_stc_usb_dev_endpoint_t usb_endpoints[] = 
{
    {
        .endpointDescriptor = &usb_configurationDescriptors[37], 
    },
    {
        .endpointDescriptor = &usb_configurationDescriptors[53], 
    },
    {
        .endpointDescriptor = &usb_configurationDescriptors[60], 
    },
};

/* Pointers to endpoints array initialization */
static const cy_stc_usb_dev_endpoint_t* usb_endpointsPtr[] = 
{
    &usb_endpoints[0],
    &usb_endpoints[1],
    &usb_endpoints[2],
};

/* Alternate settings array initialization */
static const cy_stc_usb_dev_alternate_t usb_alternates[] = 
{
    {
        .interfaceDescriptor = &usb_configurationDescriptors[9],
        .numEndpoints        = 1U,
        .endpoints           = &usb_endpointsPtr[0],
        .hid                 = NULL,
    },
    {
        .interfaceDescriptor = &usb_configurationDescriptors[44],
        .numEndpoints        = 2U,
        .endpoints           = &usb_endpointsPtr[1],
        .hid                 = NULL,
    },
};

/* Pointers to alternates array initialization */
static const cy_stc_usb_dev_alternate_t* usb_alternatesPtr[] = 
{
    &usb_alternates[0],
    &usb_alternates[1],
};

/* Interfaces array initialization */
static const cy_stc_usb_dev_interface_t usb_interfaces[] =
{
    {
        .numAlternates = 1U,
        .alternates    = &usb_alternatesPtr[0],
        .endpointsMask = 0x0001U,
    },
    {
        .numAlternates = 1U,
        .alternates    = &usb_alternatesPtr[1],
        .endpointsMask = 0x0006U,
    },
};

/* Pointers to interfaces array initialization */
static const cy_stc_usb_dev_interface_t* usb_interfacesPtr[] = 
{
    &usb_interfaces[0],
    &usb_interfaces[1],
};

/* Configurations array initialization */
static const cy_stc_usb_dev_configuration_t  usb_configurations[] =
{
    {
        .configDescriptor = &usb_configurationDescriptors[0],
        .numInterfaces    = 2U,
        .interfaces       = &usb_interfacesPtr[0],
    },
};

/* Pointers to configurations array initialization */
static const cy_stc_usb_dev_configuration_t* usb_configurationsPtr[] = 
{
    &usb_configurations[0],
};

/* Pointers to Strings array initialization */
static const uint8_t* usb_stringPtr[] = 
{
    &usb_stringDescriptors[0],
    &usb_stringDescriptors[4],
    &usb_stringDescriptors[48],
    &usb_stringDescriptors[82],
    &usb_stringDescriptors[138],

};

/* String array initialization */
static const cy_stc_usb_dev_string_t  usb_strings[] =
{
    {
        .numStrings                = 5U,
        .stringDescriptors         = &usb_stringPtr[0],
        .osStringDescriptors       = NULL,
    },
};

/* Device array initialization */
const cy_stc_usb_dev_device_t usb_devices[] =
{
    {
        .deviceDescriptor  = &usb_deviceDescriptors[0],
        .bosDescriptor     = NULL, 
        .strings           = &usb_strings[0], 
        .numConfigurations = 1U, 
        .configurations    = &usb_configurationsPtr[0], 
    },
};

/* CDC configuration */
static CY_USB_DEV_ALLOC_ENDPOINT_BUFFER(cdcBuf0, 64U);
static CY_USB_DEV_ALLOC_ENDPOINT_BUFFER(cdcBuf1, 64U);
const cy_stc_usb_dev_cdc_config_t usb_cdcConfig = 
{
    .buffer     = {cdcBuf0, cdcBuf1},
    .bufferSize = {64U, 64U},
};

/* Device configuration */
static uint8_t endpoint0Buffer[64U];
const cy_stc_usb_dev_config_t usb_devConfig = 
{
    .ep0Buffer     = endpoint0Buffer,
    .ep0BufferSize = 64U,
};

/* [] END OF FILE */
